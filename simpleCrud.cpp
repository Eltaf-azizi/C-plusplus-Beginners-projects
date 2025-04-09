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
        cout << "\t\t Logged in!" <<endl;
    }
    Sleep(3000);
    bool exit = false;

    while(!exit)
    {
        system("cls");
        int val;
        cout <<endl <<endl;
        cout << "\t\t Welcome to MySQL Database" <<endl;
        cout << "\t\t *************************" <<endl;
        cout << "\t\t 1. Insert Data" <<endl;
        cout << "\t\t 2. Delete DATA" <<endl;
        cout << "\t\t 3. Update DATA" <<endl;
        cout << "\t\t 4. Get/Read DATA" <<endl;
        cout << "\t\t 0. Exit" <<endl;
        cout << "\t\t Enter Choice: ";
        cin val;



        if(val == 1)
        {
            system("cls");
            string id, name, grade;
            cout <<endl <<endl;
            cout << "\t\t Enter ID: ";
            cin >> id;
            cout << "\t\t Enter Name: ";
            cin >> name;
            cout << "\t\t Enter Grade: ";
            cin >> grade;

            string ins = "INSERT INTO student(ID, Name, Grade) VALUES('"+id+"', '"+name+"', '"+grade+"')";


            if(mysql_query(conn, ins.c_str()))
            {
                cout <<endl <<endl;
                cout << "\t\t Error: " <mysql_error(conn) <<endl;
            }
            else
            {
                cout <<endl <<endl;
                cout << "\t\t Data inserted successfuly!" <<endl;
            }
        }
    }
    mysql_close(conn);

    return 0;
}