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
};



int main()
{

    return 0;
}