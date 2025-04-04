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
        if(row < 1 || row > 5 || seatNumber < 1 || seatNumber > 10)
        {
            return -1;
        }

        return Seat [row-1][seatNumber-1];
    }

    void reserveSeat(int row, int seatNumber)
    {
        if(row < 1 || row > 5 || seatNumber < 1 || seatNumber > 10)
        {
            return;
        }
        
        Seat [row-1][seatNumber-1] = 0;
    }

    display()
    {
        cout << " ";

        for(int i=0; i<10; i++)
        {
            cout << " " <<i+1;
        }
        cout <<endl;


        for(int row=0; row<5; row++)
        {
            cout << row + 1 << " ";

            for(int col=0; col<10; col++)
            {
                if(Seat[row][col] == 1)
                {
                    cout << "- ";
                }
                else
                {
                    cout << "X ";
                }
            }
            cout << "|" <<endl;
        }
        cout << "-------------------------------";
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
    Sleep(3000);

    return 0;
}