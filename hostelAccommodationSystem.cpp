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
    private:
    string Name, RollNo, Address;
    public:
    student():Name(""), RollNo(""), Address("") { }


    setName(string name)
    {
        Name = name;
    }


    setRollNo(string rollNo)
    {
        RollNo = rollNo;
    }


    setAddress(string address)
    {
        Address = address;
    }



    string getName()
    {
        return Name;
    }


    string getRollNo()
    {
        return RollNo;
    }


    string getAddress()
    {
        return Address;
    }
};


int main()
{
    Hostel h("3Star", 5000, 2);
    Student s;

    bool exit = false;
    while(!exit)
    {
        system("cls");
        int val;
        cout << "\t Welcome To Hostel Accommodation System" <<endl;
        cout << "\t **************************************" <<endl;
        cout << "\t 1. Reserve a Bed." <<endl;
        cout << "\t 2. Exit." <<endl;
        cout << "\t Enter Choice: ";
        cin >>val;


        if(val==1)
        {
            system("cls");
            string name, rollNo, address;
            cout << "\t Enter Name of Student: ";
            cin >> name;
        }
    }
}