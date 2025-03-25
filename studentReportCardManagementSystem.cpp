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


            int physics, computer, math, total, avg;
            cout << "\t Enter Marks of Physics: ";
            cin >> physics;


            cout << "\t Enter Marks of Computer: ";
            cin >> computer;


            cout << "\t Enter Marks of Math: ";
            cin >> math;


            system("cls");
            cout << "\t Student Report Card" <<endl;
            cout << "\t *******************" <<endl;
            total = physics + computer + math;
            cout << "Total Marks Obtained: " << total <<endl;
            avg = total / 3;
            cout << "Average Marks Obtained: " << avg <<endl;



            if(avg >= 90 && avg >= 100)
            {
                s.setGrade("A+");
            }
            else if(avg >= 80 && avg < 90)
            {
                s.setGrade("A");
            }
            else if(avg >= 70 && avg < 80)
            {
                s.setGrade("B");
            }
            else if(avg >= 60 && avg < 70)
            {
                s.setGrade("C");
            }
            else if(avg >= 50 && avg < 60)
            {
                s.setGrade("D");
            }
            else if(avg >= 40 && avg < 50)
            {
                s.setGrade("E");
            }
            else
            {
                s.setGrade("F");
            }

            cout << "\tGrade of Student: " <<s.getGrade() <<endl;

            ofstream out("D:/Student.txt", ios::app);
            out << "\t" <<s.getRollNo()<<" : "<<s.getName()<<" : "<<s.getGrade() <<endl <<endl;
            out.close();
            cout << "\tReport Card is Saved to File!" <<endl;
            Sleep(10000);
        }



        else if(val == 2)
        {
            system("cls");
            exit = true;
            cout << "\tGood Luck!" <<endl;
            Sleep(3000);
        }
    }
}