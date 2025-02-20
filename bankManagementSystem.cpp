#include <stdio.h>
#include <conio.h>
#include <iostream.h>

class bank
{
    public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void display_account();
};

void bank :: open_account()
{
    cout << "enter your full name :: ";
}

int main() 
{
    cout << "1) Open account \n";
    cout << "2) Deposit Money \n";
    cout << "3) Withdraw Money \n";
    cout << "4) Display Account \n";
    cout << "5) Exit";


    getch();
    return 0;
}