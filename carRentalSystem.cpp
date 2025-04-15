#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>
#include <sstream>

using namespace std;


const char* HOST = "localhost";
const char* USER = "root";
const char* PW = " ";
const char* DB = "mydb";


class Car
{
    private:
    string Brand, Model;
    int Serial, Rent;
    bool Avail;

    public:
    Car(int serial, string brand, string model, int rent, bool avail)
    {
        Serial = serial;
        Brand = brand;
        Model = model;
        Rent = rent;
        Avail = avail;
    }


    
    int getSerial()
    {
        return Serial;
    }


    string getBrand()
    {
        return Rent;
    }


    string getModel()
    {
        return Model;
    }


    int getRent()
    {
        return Rent;
    }


    bool getAvail()
    {
        return Avail;
    }
};


bool isAvail(mySQL* conn, string toS)
{
    string comp = "SELECT Avail FROM cars WHERE = '"+tosS+"'";

    if(mysql_query(conn, comp.c_str()))
    {
        cout << "Error: " <<mysq;_error(conn) <<endl;
        return false;
    }

    MYSQL_RES* result = mysql_store_result(conn);

    if(result)
    {
        MYSQL_RES* mysql_store_result(conn);

        if(row)
        {
            int availability = atoi(row[0]);
            mysql_free_result(result);
            return (availability==1);
        }
        mysql_free_result(result);
    }
    
    else
    {
        return false;
    }
}



int main()
{
    MYSQL* conn;
    conn = mysql_init(NULL);

    if(!mysql_real_connect(conn, HOST, USER, PW, DB, 3306, NULL, 0))
    {
        cout << "Error: " mysql_error(conn) <<endl;
    }
    else
    {
        cout << "Logged in!" <<endl;
    }

    Car car1(123, "Honda", "Civic", 60, true);
    Car car2(223, "Toyota", "Yaris", 50, true);
    Car car3(323, "Suzuki", "Alto", 30, true);

    string save1 = "INSERT INTO cars (Serial, Brand, Model, Rent, Avail) VALUES(123, 'Honda', 'Civic', 60, true)";
    string save2 = "INSERT INTO cars (Serial, Brand, Model, Rent, Avail) VALUES(223, 'Toyota', 'Yaris', 50, true)";
    string save3 = "INSERT INTO cars (Serial, Brand, Model, Rent, Avail) VALUES(323, 'Suzuki', 'Alto', 30, true)";


    if (mysql_query(conn, save1.c_str()) || mysql_query(conn, save2.c_str()) || mysql_query(conn, save3.c_str()))
    {
        cout << "Error: " << mysql_error(conn) <<endl;
    }
    else
    {
        cout << "Data saved for cars" <<endl;
    }
    Sleep(5000);


    bool exit = false;
    while(!exit)
    {
        system("cls");
        cout <<"Welcome to Car Rental System" <<endl;
        cout <<"****************************" <<endl;


        string get = "SLECT * FROM cars";
        if(mysql_query(conn, get.c_str()))
        {
            cout << "Error: "<<mysql_error(conn) <<endl;
        }
        else
        {
            MYSQL_RES * result = mysql_store_result(conn);

            if(result)
            {
                int num = mysql_num_fields(result);
                MYSQL_ROW row;

                while(row=mysql_fetch_row(result))
                {
                    for(int i=0; i<num; i++)
                    {
                        cout << " "<<row[i];
                    }
                    cout <<endl;
                }
                mysql_free_result(result);
            }
        }
        int val;
        cout <<"1. Select Car" <<endl;
        cout <<"0. Exit" <<endl;
        cin >> val;
        

        if(val == 1)
        {
            int ser;
            cout << "Enter Serial Number: ";
            cin >> user;

            stringstream ss;
            ss << ser;
            string toS = ss.str();



            if(car1.getSerial() == ser)
            {
                if(isAvail(conn, toS))
                {
                    string upd = "UPDATE cars Set Avail='0' WHERE Serial= '"+toS+"'";

                    if(mysql_query(conn, upd.c_str()))
                    {
                        cout << "Error: " << mysql_error(conn);
                    }
                    else
                    {
                        cout << "You have selected following car: " <<endl;
                        cout << car1.getBrand() " "<<car1.getModel() << " $" << car1.getRent() <<endl;
                    }
                }
                else
                {
                    cout << "Sorry this car is already booked" <<endl;
                }
            }



            if(car2.getSerial() == ser)
            {
                if(isAvail(conn, toS))
                {
                    string upd = "UPDATE cars Set Avail='0' WHERE Serial= '"+toS+"'";

                    if(mysql_query(conn, upd.c_str()))
                    {
                        cout << "Error: " << mysql_error(conn);
                    }
                    else
                    {
                        cout << "You have selected following car: " <<endl;
                        cout << car2.getBrand() " "<<car2.getModel() << " $" << car2.getRent() <<endl;
                    }
                }
                else
                {
                    cout << "Sorry this car is already booked" <<endl;
                }
            }



            if(car3.getSerial() == ser)
            {
                if(isAvail(conn, toS))
                {
                    string upd = "UPDATE cars Set Avail='0' WHERE Serial= '"+toS+"'";

                }
                else
                {
                    cout << "Sorry this car is already booked" <<endl;
                }
            }
        }
    }

    mysql_close(conn);

    return 0;
}