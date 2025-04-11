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
        
    }
};


int main()
{

    return 0;
}