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



int main()
{
    MYSQL* conn;
    conn = mysql_init(NULL);

    if(!mysql_real_connect(conn, HOST, USER, PW, DB, 3306, NULL, 0))
    {
        
    }

    return 0;
}