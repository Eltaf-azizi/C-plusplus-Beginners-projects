#include <iostream>
#include <mysql.h>
#include <windows.h>
#include <sstream>

using namespace std;


const char* HOST = 'localhost';
const char* USER = "root";
const char* PW = "your password";
const char* DB = "mydb";


class Seats
{
    private:
    int Seat[5][10];
    public:
    Seats()
    {
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<10; j++)
            {
                Seat[i][j] = 1;
            }
        }
    }

    int getSeatStatus(int row, int seatNumber)
    {
        
    }
};

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
        cout << "Logged In Database!" <<endl;
    }

    return 0;
}