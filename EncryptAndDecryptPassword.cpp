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


char encrytCh(char ch, int shift)
{
    if(isalpha(ch))
    {
        
    }
}


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
    int shift = 3;


    bool exit = false;
    while(!exit)
    {
        system("cls");
        cout << "1. Sign Up" << endl;
        cout << "2. Login" <<endl;
        cout << "0. Exit" <<endl;
        cout << "Enter your Choice: ";
        int val;
        cin >> val;



        if(val == 1)
        {
            system("cls");
            string id, pw;
            cout << "Enter ID for Sign Up: ";
            cin >> id;
            l.setId(id);


            cout << "Enter a String Password: ";
            cin >> pw;
            l.setPW(pw);
        }
    }// while

    return 0;
}