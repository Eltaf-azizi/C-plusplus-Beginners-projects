#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>

using namespace std;


const char * HOST = "localhost";
const char * USER = "root";
const char * PW = "password";
const char * DB = "mydb";


int main()
{
    MYSQL * conn;
    conn = mysql_init(NULL);

    if(!mysql_real_connect(conn, HOST, USER, PW, 3306, NULL, 0))
    {
        cout <<endl <<endl;
        cout << "\t\t Error: " <<mysql_error(conn) <<endl;
    }
    else
    {
        cout <<endl <<endl;
        cout << "\t\t Logged in" <<endl;
    }

    return 0;
}