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



int main()
{
    Student s;

    bool exit = false;
    while(!exit)
    {
        system("cls");
        int val;
        cout << "\t Welcome to the Student Report Card System" <<endl;
        cout << "\t *****************************************" <<endl;
        cout << "\t 1. Report Card" <<endl;
        cout << "\t 2. Exit" <<endl;
        cout << "\t Enter Choice: ";
        cin >> val;



        if(val == 1)
        {
            system("cls");
            strng rollNo, name;
            cout << "\t Enter RollNo of Student: ";
            cin >> rollNo;
            s.setRollNo(rollNo);

            
            cout << "\t Enter Name of Student: ";
            cin >> name;
            s.setName(name);
        }
    }
}