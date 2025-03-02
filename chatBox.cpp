#include<windows.h>
#include <iostream>
#include <string>
using namespace std;



int main()
{
    char inp, y, n, Y, N;
    string name, getKey;
    int age;

    cout << "\t\t WELCOME TO CHATBOX\n";
    cout << "Do you want to chat with me? (Y/N)\n";
    cout << "--> ";
    cin>>inp;


    //condition (y/n)
    if(inp == 'y' || inp == 'Y')
    {
        cout << "\n Welcome...";
    }
    else
    {
        cout << "\n Thanks for coming...";    

        return 0;
    }
    system("cls");


    if(getKey != "bi")
    {
        cout << "\t HELLO USER \n";
        cin>>getKey;
        cout << "What is your name? \n";
        cin>>name;
        cout << name << "How old are you? \n";
        cout << " --> ";
        cin >> age;


        switch(age)
        {
            case 1 ... 10:
                cout << "You are a kid\n";
                cout << " --> ";
                break;
            case 11 ... 20:
                cout << "You are a teenager\n";
                cout << " --> ";
                break;
            case 21 ... 30:
                cout << "You are a young adult\n";
                cout << " --> ";
                break;
            case 31 ... 40:
                cout << "You are an adult\n";
                cout << " --> ";
                break;
            case 41 ... 50:
                cout << "You are a middle-aged adult\n";
                cout << " --> ";
                break;
            case 51 ... 60:
                cout << "You are a senior citizen\n";
                cout << " --> ";
                break;
            default:
                cout << "You are an old person\n";
                cout << " --> ";
                break;
        }

        cout << "\n Bye Bye " << name << "\n";
        cout << " --> ";
        cin>>getKey;
    }

    system("cls");
    cout << "\t\t\t\t PROGRAM END HERE ";

    return 0;
};