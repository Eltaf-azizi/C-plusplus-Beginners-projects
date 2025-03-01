#include<windows.h>
#include <iostream>
#include <string>
using namespace std;



int main()
{
    char inp, y, n, Y, N;
    string name, getKey;

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
    }

    return 0;
};