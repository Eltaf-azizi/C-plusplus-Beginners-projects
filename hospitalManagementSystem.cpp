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
        ofstream out("Rana.txt", ios::app | ios::binary);
        a1.get();
        out.write((char*) a1, sizeof(info));
        out.close();
        cout << "Your entry has been saved ";
        getch();
        menu();
    }


    void show()
    {
        ifstream in("rana.txt");
        if(in==NULL)
        {
            cout << "\n\n No data in the file";
            cout << "\n\n\t\t Press any key to continue";
            getch();
            menu();
        }
        else{
            while(!in.eof())
            {
                in.read((char*) * a1, sizeof(a1));
                a1.show();
            }
            in.close();
            getch();
            menu();
        }
    }
}

