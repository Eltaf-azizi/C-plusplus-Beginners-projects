#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;


class Student
{
    private:
    string RollNo, Name, Grade;

    public:
    Student(): RollNo(""), Name(""), Grade(""){}


    setRollNo(string rollNo)
    {
        RollNo = rollNo;
    }


    setName(string name)
    {
        Name = name;
    }


    setGrade(string grade)
    {
        Grade = grade;
    }


    string getRollNo()
    {
        return RollNo;
    }


    string getName()
    {
        return Name;
    }


    string getGrade()
    {
        return Grade;
    }
};