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
            Slep(3000);
        }




        else if(val == 2)
        {
            system("cls");
            cout <<endl <<endl;
            string id;
            cout << "\t\t Enter ID: ";
            cin >> id;

            string del = "DELETE FROM student WHERE ID = '"+id+"'";

            if(mysql_query(conn, del.c_str()))
            {
                cout <<endl <<endl;
                cout << "\t\t Error: " <<mysql_error(conn);
            }
            else
            {
                cout <<endl <<endl;
                cout << "\t\t Data Deleted Successfuly!" <<endl;
            }
            Sleep(3000);
        }



        else if(val == 3)
        {
            system("cls");
            cout <<endl <<endl;
            string id, grade;
            cout << "\t\t Enter ID: ";
            cin >> id;
            cout << "\t\t Enter New Grade: ";
            cin >> grade;
            string upd = "UPDATE student SET Grade = '"+grade+"' WHERE ID = '"+id+"' ";


            if(mysql_query(conn, upd.c_str()))
            {
                cout <<endl <<endl;
                cout << "\t\t Error: "<<mysql_error(conn);
            }
            else
            {
                cout <<endl <<endl;
                cout << "\t\t Data Updated Successfuly!" <<endl;
            }
            Sleep(3000);
        }



        else if(val == 4)
        {
            system("cls");
            string get = "SELECT * FROM student";


            if(mysql_query(conn, get.c_str()))
            {
                cout <<endl <<endl;
                cout << "\t\t Error: "<<mysql_error(conn);
            }
            else
            {
                MYSQL_RES* result = mysql_store_result(conn); 

                if(result)
                {
                    int num = sql_num_fields(result);
                    MYSQL_ROW row;
                    cout <<endl <<endl;
                    cout << "\t\t ID\t\t Name\t\t Grade" <<endl;
                }
            }
        }
    }
    mysql_close(conn);

    return 0;
}