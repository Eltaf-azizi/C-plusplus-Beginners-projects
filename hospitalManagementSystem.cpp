#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>
using namespace std;



void menu();
void passcode();
void cpasscode();


class one 
{
    public;
    virtual void get()=0;
    virtual void show()=0;
}


class inof:public one
{
    public;
    char name[50], time[50];
    int sum, age;


    void get()
    {
        system("cls");
        cin.sync();
        cout << "\n Enter the patient name =";
        cin.getline(name, 50);
        cout << "\n Enter the appointment time =";
        cin.getline(time, 50);
        cout << "\n Enter your age =";
        cin>>age;
        cout << "\n Enter appointment number =";
        cin>>num;
    }


    void show()
    {
        cout << "\n Name =" << name;
        cout << "\n Age =" << age;
        cout << "\n Number=" << num;
        cout << "\n Time" << time;
    }
};


class rana:public info
{
    public;
    info a1;


    void get()
    {
        system("cls");
        ofstream out("Rana.txt", ios::app);
    }
}

