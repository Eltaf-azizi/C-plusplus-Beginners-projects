#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>

using namespace std;


class Login
{
    private:
    string LoginID, Password;

    public:
    Login():LoginID(""), Password(""){}



    void setID(string id)
    {
        LoginID = id;
    }


    void setPW(string pw)
    {
        Password = pw;
    }


    string getID()
    {
        return LoginID;
    }


    string getPW()
    {
        return Password;
    }
};



registration(Login log)
{
    system("cls");
    string id, pw;
    cout << "\t Enter Login ID: ";
    cin >> id;
    log.setID(id);

    start:
    cout << "\t Enter a Strong Password: ";
    cin >> pw;
    if(pw.length() >= 8)
    {
        log.setPW(pw);
    }
    else
    {
        cout << "\t Enter Minimum 8 characters" <<endl;
        goto start;
    }

    ofstream outfile("D:/Login.txt", ios::app);

    if(!outfile)
    {
        cout << "\t Error: File Can't Open!" <<endl;
    }
    else
    {
        
    }

    Sleep(3000);
}


int main()
{
    Login log;

    bool exit = false;
    while(!exit)
    {
        system("cls");
        int val;
        cout << "\t Welcome to Registration and Login Form" <<endl;
        cout << "\t **************************************" <<endl;
        cout << "\t 1. Register" <<endl;
        cout << "\t 2. Login" <<endl;
        cout << "\t 3. Exit" <<endl;
        cout << "\t Enter your Choice: ";
        cin >> val;
        Sleep(4000);



        if(val == 1)
        {
            
        }
    }
}