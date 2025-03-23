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
        RollNo = rollNo;
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
    string rollNo, name, subject, address;

    
    cout << "Enter RollNo of the Student: ";
    cin >> rollNo;
    student.setRollNo(rollNo);


    cout << "\t Enter RollNo Of Student: ";
    cin >> rollNo;
    student.setRollNo(rollNo);


    cout << "\t Enter Name of Student: ";
    cin >> name;
    student.setName(name);


    cout << "\t Enter Subject of student: ";
    cin >> subject;
    student.setSubject(subject);


    cout << "\t Enter Address of Student: ";
    cin >> address;
    student.setAddress(address);

    ofstream out("D:/university.txt", ios::app);


    if(!out)
    {
        cout << "\t Error: File Can't Open!" <<endl;
    }
    else
    {
        out << "\t" << student.getRollNo() << " : "<<student.getName() << " : " <<student.getSubject()
        <<" : "<<student.getAddress() <<endl <<endl;
    }
    out.close();
    cout << "\t Student Added Successfuly!" <<endl;
}



search()
{
    string rollNo;
    cout << "\t Enter RollNo of Student: ";
    cin>>rollNo;

    ifstream in("D:/university.txt");
    if(!in)
    {
        cout << "\t Error: File Can't Open!" <<endl;
    }

    string line;
    bool found = false;

    while(getline(in, line))
    {
        int data = line.find(rollNo);

        if(data != string::npos)
        {
            cout << "\t" <<line<<endl;
            found = true;
        }
        else
        {
            cout << "\t Student Not Found!" <<endl;
        }
    }
    in.close();
}


update(University student)
{
    string rollNo;
    cout << "\t Enter RollNo of Student: ";
    cin>>rollNo;

    ifstream infile("D:/university.txt");
    ofstream outfile("D:/university temp.txt");
    if(!in || !out)
    {
        cout << "Error: File Can't Open!" <<endl;
    }


    string line;
    bool found = false;
    while(getline(infile, line))
    {
        int pos = line.find(rollNo);
        
        if(pos != string :: npos)
        string address;
        cout << "\t Enter New Address: ";
        cin >> address;
        student.setAddress(address);

        int newPos = line.find_last_of(':');
        line.replace(newPos + 2);
    }
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
            add(student);
            Sleep(6000);
        }


        else if(val == 2)
        {
            system("cls");
            search();
            Sleep(5000);
        }


        else if(val == 3)
        {
            system("cls");
            Sleep(5000);
        }
    }
}