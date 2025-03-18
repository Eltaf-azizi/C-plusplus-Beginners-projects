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