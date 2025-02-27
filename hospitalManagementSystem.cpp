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
    public:

    void drinfo()
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
        cout << "\t\tDr. Fahad (Eye Specialist)\n\n";
        cout << "\t\t\t [[Timing]]:\n\n";
        cout << "\tMonday to Friday\t\t9AM to 5PM\n";
        cout << "\tSaturday        \t\t9AM to 1PM\n";
        cout << "\tSunday          \t\tOff\n";
        cout << "---------------------------------------------------------------------------------------------";
        cout << "\nPress any key to continue";
        getch();
        menu();
    }
    
};

void call_dr()
{
    system("cls");
    int choice;
    cout << "\n\n\n\t\tPress 1 for Dr. Rana \n\n\t\t Press 2 for Dr. Jahangir \n\n\t\t Press 3 for Dr. Fahad\n\n";
    cin>>choice;

    one *ptr;
    rana s3;
    Jahangir s4;
    Fahad s5;

    if(choice == 1)
    {
        ptr = & s3;
        ptr->get();
    }

    else if(choice == 2)
    {
        ptr = & s4;
        ptr->get();
    }

    else if(choice== 4)
    {
        ptr = & s5;
        ptr->get();
    }

    else{
        cout << "Sorry invalid choice :";
        getch();
        menu();
    }
};



void menu()
{
    system("cls");
    system("color FC");

    cout << "\n";
    cout << "\n";

    cout << "\t\t   |   ++++++++  MAIN MENU  ++++++++  |  \n";
    cout << "\t\t   |     Hopital Management System    |  \n";
    cout << "\t\t   |==================================|  \n";

    cout << "\n---------------------------------------------------------------------------------------\n";
    cout << "\t\t     Please Select Any Option    \n";

    cout << "\n\n\t1-\t\t Press 1 for available doctor information \n\n";
    cout << "\t2-\t\t Press 2 for doctor appointment \n\n";
    cout << "\t3-\t\t Press 3 for saving staff information menu:\n\n ";
    cout << "\t4-\t\t Press 4 for checking patient appiontment menu: \n\n";
    cout << "\t5-\t\t Press 5 for checking staff information menu: \n\n";
    cout << "\t6-\t\t Press 5 for change password or create password : \n\n";
    cout << "\t7-\t\t [   Press 7 for logout  ] \n";

    cout << "\n=======================================================================================\n";
    cout << "\n\n\t\t Please enter your choice : ";
    information a1;
    one *ptr;
    staff a2;
    int a;
    cin>>a;

    if(a==1)
    {
        a1.drinfo();
    }

    else if(a==2)
    {
        call_dr();
    }

    else if(a==3)
    {
        ptr=&a2;
        ptr->get();
    }

    else if(a==4)
    {
        pinfoshow();
    }

    else if(a==5)
    {
        ptr=&a2;
        ptr->show();
    }

    else if(a==6)
    {
        cpasscode();
    }

    else if(a==7)
    {
        passcode();
    }

    else{
        cout << "Sorry invalid choice : ";
    }
}


