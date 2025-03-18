#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>

using namespace std;

class Airline
{
    private:
    string Flight, Des, Dep;
    int Seats;

    public:
    Airline(string flight, string des, string dep, int seats)
    {
        Flight = flight;
        Des = des;
        Dep = dep;
        Seats = seats;
    }



    string getFlight()
    {
        return Flight;
    }



    string getDep()
    {
        return Dep;
    }
    


    int getSeat()
    {
        return Seats;
    }
};



int main()
{
    Airline flight1("F101", "UAE", "England", 50);
    Airline flight2("F202", "UAE", "USA", 40);
    Airline flight3("F303", "UAE", "Canada", 2);

    ofstream out("D:/Flight.txt");

    if(!out)
    {
        cout << "Error: File can't open!" <<endl;
    }
    else
    {
        out << flight1.getFlight()<<" : " << flight1.getDes() << " : " <<
        flight1.getDep()() << " : " << " : " << flight1.getSeats() <<endl << endl;


        out << flight1.getFlight()<<" : " << flight1.getDes() << " : " <<
        flight1.getDep()() << " : " << " : " << flight1.getSeats() <<endl << endl;


        out << flight1.getFlight()<<" : " << flight1.getDes() << " : " <<
        flight1.getDep()() << " : " << " : " << flight1.getSeats() <<endl << endl;

        cout << "Data Saved Successfuly!" <<endl;
 
    }
}