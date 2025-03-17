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
    ofstream out("D:/Hostel.txt");
    out << "\t" <<h.getName()<<" : " << h.getRent()<< " : " << h.getBed() <<endl <<endl;
    cout << "Hostel Data Saved" <<endl;
    out.close();
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
            s.setName(name);


            cout << "\t Enter RollNo of Student: ";
            cin >> rollNo;
            s.setRollNo(rollNo);


            cout << "\t Enter Address of Student: ";
            cin >> address;
            s.setAddress(address);


            ofstream outFile("D:/Student.txt", ios::app);
            outFile<<"\t" << s.getName()<<" : " <<s.getRollNo()<< " : " <<s.getAddress() <<endl<<endl;
        }
    }
}