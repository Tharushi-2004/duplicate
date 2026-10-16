#pragma once

#include <mysql/jdbc.h>
#include <memory>
#include <string>

namespace ZELORAGUI
{
    using namespace System;
    using namespace System::Windows::Forms;

    public ref class Database
    {
    public:

        static bool TestConnection()
        {
            MessageBox::Show("DB Step 1: TestConnection started!");

            try
            {
                MessageBox::Show("DB Step 2: Inside try!");

                MessageBox::Show("DB Step 3A: Trying to get MySQL driver...");

                auto driver =
                    sql::mysql::get_mysql_driver_instance();

                MessageBox::Show("DB Step 3B: Driver function returned!");

                if (driver == nullptr)
                {
                    MessageBox::Show(
                        "DB Step 4: Driver is NULL!",
                        "Database Error",
                        MessageBoxButtons::OK,
                        MessageBoxIcon::Error
                    );

                    return false;
                }

                MessageBox::Show("DB Step 5: Driver is NOT NULL!");

                MessageBox::Show("DB Step 5.5: Passed driver check!");

                std::unique_ptr<sql::Connection> connect(
                    driver->connect(
                        "tcp://127.0.0.1:3306",
                        "root",
                        "RGtdp2004*"
                    )
                );

                MessageBox::Show("DB Step 6: Connection created!");

                if (!connect)
                {
                    MessageBox::Show("DB Step 7: Connection is NULL!");
                    
                }

                connect->setSchema("ZELORA");

                MessageBox::Show("DB Step 8: Schema selected!");

                return true;
            }
            catch (const sql::SQLException& ex)
            {
                String^ errorMessage = gcnew String(ex.what());

                MessageBox::Show(
                    errorMessage,
                    "MySQL Error",
                    MessageBoxButtons::OK,
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                return false;
            }
        }
    };
}