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
        cin >> age;


        switch(age)
        {
            case 1 ... 10:
                cout << "You are a kid\n";
                break;
            case 11 ... 20:
                cout << "You are a teenager\n";
                break;
            case 21 ... 30:
                cout << "You are a young adult\n";
                break;
            case 31 ... 40:
                cout << "You are an adult\n";
                break;
            case 41 ... 50:
                cout << "You are a middle-aged adult\n";
                break;
            case 51 ... 60:
                cout << "You are a senior citizen\n";
                break;
            default:
                cout << "You are an old person\n";
                break;
        }
    }

    return 0;
};