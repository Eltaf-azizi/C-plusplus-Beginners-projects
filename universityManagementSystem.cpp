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
};