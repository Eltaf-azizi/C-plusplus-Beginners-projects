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
    public:
    virtual void get()=0;
    virtual void show()=0;
};


class inof:public one
{
    public:
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
    public:
    info a1;


    void get()
    {
        system("cls");
        ofstream out("Rana.txt", ios::app | ios::binary);
        a1.get();
        out.write((char*) & a1, sizeof(info));
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
                in.read((char*) & a1, sizeof(a1));
                a1.show();
            }
            in.close();
            cout << "Press any key to continue";
            getch();
            menu();
        }
    }
};



class Jahangir:public info
{
    public:
    info a1;


    void get()
    {
        system("cls");
        ofstream out("Jahangir.txt", ios::app | ios::binary);
        a1.get();
        out.write((char*) & a1, sizeof(info));
        out.close();
        cout << "Your entry has been saved ";
        getch();
        menu();
    }


    void show()
    {
        ifstream in("Jahangir.txt");
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
                in.read((char*) & a1, sizeof(a1));
                a1.show();
            }
            in.close();
            cout << "Press any key to continue";
            getch();
            menu();
        }
    }
};



class Fahad : public Info{
    public:
    info a1;


    void get()
    {
        system("cls");
        ofstream out("Fahad.txt", ios::app | ios::binary);
        a1.get();
        out.write((char*) & a1, sizeof(info));
        out.close();
        cout << "Your entry has been saved ";
        getch();
        menu();
    }


    void show()
    {
        ifstream in("Fahad.txt");
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
                in.read((char*) & a1, sizeof(a1));
                a1.show();
            }
            in.close();
            cout << "Press any key to continue";
            getch();
            menu();
        }
    }

};



class information
{
    system("cls");
    system("color F3");
    cout << "\n=============================================================================================";
    cout << "\n\n\t\t(Three Doctor Available) \n\n \t\t[Information and timing are given below]\n";
    cout << "---------------------------------------------------------------------------------------------";
    cout << "\t\tDr. Rana (skin specialist)\n\n";
    cout << "\t\t\t [[Timing]]:\n\n";
    cout << "\tMonday to Friday\t\t9AM to 5PM\n";
    cout << "\tSaturday        \t\t9AM to 1PM\n";
    cout << "\tSunday          \t\tOff\n";
    cout << "---------------------------------------------------------------------------------------------";
    cout << "\t\tDr. Jahangir (Dentist)\n\n";
    cout << "\t\t\t [[Timing]]:\n\n";
    cout << "\tMonday to Friday\t\t9AM to 5PM\n";
    cout << "\tSaturday        \t\t9AM to 1PM\n";
    cout << "\tSunday          \t\tOff\n";
    cout << "---------------------------------------------------------------------------------------------";
}

