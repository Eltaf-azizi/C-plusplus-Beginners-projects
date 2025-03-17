#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>

using namespace std;


class Hostel
{
    private:
    string Name;
    int Rent, Bed;

    public:
    Hostel(string name, int rent, int bed)
    {
        Name = name;
        Rent = rent;
        Bed = bed;
    }


    string getName()
    {
        return Name;
    }


    int getRent()
    {
        return Rent;
    }


    int getBed()
    {
        return Bed;
    }
};


class Student
{
    
}