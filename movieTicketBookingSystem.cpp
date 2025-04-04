#include <iostream>
#include <mysql.h>
#include <windows.h>
#include <sstream>

using namespace std;


const char* HOST = 'localhost';
const char* USER = "root";
const char* PW = "your password";
const char* DB = "mydb";


int main()
{
    MYSQL * conn;
    conn = mysql_init(NULL);

    if(!mysql_real_connect(conn, HOST, USER, PW, DB, 3306, NULL, 0))
    {
        cout << "Error: " << mysql_error(conn);
    }
    else
    {
        
    }

    return 0;
}