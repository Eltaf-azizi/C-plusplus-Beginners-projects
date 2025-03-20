#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;


class University
{
    private:
    string RollNo, Name, Subject, Address;

    public:
    University():RollNo(""), Name(""), Subject(""), Address(""){}


    setRollNo(string rollNo)
    {
        RollNo = rollno;
    }


    setName(string name)
    {
        Name = name;
    }


    setSubject(string subject)
    {
        Subject = subject;
    }


    setAddress(string address)
    {
        Address = address;
    }


    string getRollNo()
    {
        return RollNo;
    }


    string getName()
    {
        return Name;
    }


    string getSubject()
    {
        return Subject;
    }


    string getAddress()
    {
        return Address;
    }
};


add(University student)
{
    
}


int main()
{
    University student;

    bool exit = false;
    while(!exit)
    {
        system("cls");
        int val;

        cout << "\t Welcome to University Management System" <<endl;
        cout << "\t ***************************************" <<endl;
        cout << "\t 1. Add Student." <<endl;
        cout << "\t 2. Search Student." <<endl;
        cout << "\t 3. Update Data Of Student." <<endl;
        cout << "\t 4. exit." <<endl;
        cout << "\t Enter Your Choice: ";
        cin val;


        if(val == 1)
        {
            system("cls");
            Sleep(6000);
        }
    }
}