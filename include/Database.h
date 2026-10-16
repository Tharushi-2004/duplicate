#ifndef DATABASE_H
#define DATABASE_H

#include <string>

class Database {
private:
    std::string connectionStatus;

public:
    Database();
    bool connect();
    void disconnect();
    std::string getConnectionStatus();
    
    // Method to save user records into the MySQL database
    bool addUser(const std::string& username, const std::string& password);
};

#endif