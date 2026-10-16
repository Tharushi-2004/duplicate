#include "../include/Database.h"
#include <mysql/jdbc.h>
#include <memory>

Database::Database()
{
    connectionStatus = "Disconnected";
}

bool Database::connect()
{
    try
    {
        auto driver = sql::mysql::get_mysql_driver_instance();
        if (!driver) return false;

        std::unique_ptr<sql::Connection> conn(
            driver->connect("tcp://127.0.0.1:3306", "root", "RGtdp2004*")
        );
        conn->setSchema("ZELORA");

        connectionStatus = "Connected";
        return true;
    }
    catch (const sql::SQLException& ex)
    {
        connectionStatus = "Disconnected";
        return false;
    }
}

void Database::disconnect()
{
    connectionStatus = "Disconnected";
}

std::string Database::getConnectionStatus()
{
    return connectionStatus;
}

bool Database::addUser(const std::string& username, const std::string& password)
{
    try
    {
        auto driver = sql::mysql::get_mysql_driver_instance();
        if (!driver) return false;

        std::unique_ptr<sql::Connection> conn(
            driver->connect("tcp://127.0.0.1:3306", "root", "RGtdp2004*")
        );
        conn->setSchema("ZELORA");

        // Use a prepared statement to securely insert user records into the database
        std::unique_ptr<sql::PreparedStatement> pstmt(
            conn->prepareStatement("INSERT INTO users (username, password) VALUES (?, ?)")
        );

        pstmt->setString(1, username);
        pstmt->setString(2, password);

        pstmt->executeUpdate();
        return true;
    }
    catch (const sql::SQLException& ex)
    {
        // Handle database exception/error here if needed
        return false;
    }
}