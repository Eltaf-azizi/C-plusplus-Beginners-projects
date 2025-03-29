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
        outfile<<"\t"<<log.getID()<<" : "<<log.getPW() <<endl <<endl;
        cout << "\t User Registered Successfuly!" <<endl;
    }
    outfile.close();

    Sleep(3000);
}



login()
{
    system("cls");
    string id, pw;
    cout << "\t Enter Login ID: ";
    cin >> id;


    cout << "\t Enter Password: ";
    cin >> pw;

    ifstream infile("D:/Login.txt");
    
    if(!infile)
    {
        cout << "\t Error: File Can't Open!" <<endl;
    }
    else
    {
        string line;
        bool found = false;
        while(getline(infile, line))
        {
            stringstream ss;
            ss << line;
            string userID, userPW;
            char delimiter;
            ss>>userID<<delimiter>>userPW;


            if(id == userID && pw == userPW)
            {
                found = true;

                cout << "\t Please Wait";
                for(int i=0; i<3; i++)
                {
                    cout << ".";
                    Sleep(800);
                }
                system("cls");

                cout << "\t Welcome to This Page!" <<endl;
            }
        }

        if(!found)
        {
            cout << "\t Error: Incorrect Login ID or Password!" <<endl;
        }
    }
    infile.close();
    Sleep(5000);
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
            registration(log);
        }


        else if(val == 2)
        {
            login();
        }


        else if(val == 3)
        {
            system("cls");
            exit = true;
            cout << "\t Good Luck!" <<endl;
            Sleep(3000);
        }

        Sleep(3000);
    }
}