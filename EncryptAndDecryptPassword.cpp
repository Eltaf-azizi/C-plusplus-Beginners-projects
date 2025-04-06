#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>

using namespace std;


const char* HOST = "localhost";
const char* USER = "root";
const char* PW = " ";
const char* DB = "mydb";


class Login
{
    private:
    string userId, userPW;
    public:
    Login(): userId(""), userPW("") {}



    void setId(string id)
    {
        userId = id;
    }


    void setPW(string pw)
    {
        userPW = pw;
    }



    string getId() const
    {
        return userId;
    }


    string getPW() const
    {
        return userPW;
    }
};



int main()
{
    Login l;

    MYSQL * conn;
    conn = mysql_init(NULL);


    if(!mysql_real_connect(conn, HOST, USER, PW, DB, 3306, NULL, 0))
    {
        cout << "Error: " << mysql_error(conn) <<endl;
    }
    else
    {
        cout << "Logged In Database!" <<endl;
    }
    Sleep(3000);

    return 0;
}