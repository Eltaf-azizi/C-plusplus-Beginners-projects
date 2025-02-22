#include <stdio.h>
#include <conio.h>
#include <iostream.h>

class bank
{
    char name[100], add[100], y[100];
    int balance;
    public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void display_account();
};

void bank :: open_account()
{
    cout << "Enter your full name :: ";
    cin.ignore();
    cin.getline(name, 100)
    cout << "Enter your address ::";
    cin.ignore();
    cin.getline(add, 100);
    cout << "What type of account you want to open saving (s) or current (c)"
    cin >> y;
    cout << "Enter amount for deposit :: ";
    cin >> balance;
    cout << "Your account is created \n";
}


void deposit :: deposit_money()
{
    cout << "Enter how much you deposit :: ";
    cin >> a;
    balance+=a;
    cout << "Total amount you deposit :: \t" << balance;
}


void bank :: display_account()
{
    cout << "Your full name :: \t" << name;
    cout << "Your address :: \t " << addr;
    cout << "type of account that you open :: \t" << y;
    cout << "amount you deposit :: \t" << balance;
}



void bank :: withdraw_money()
{
    float amount;
    cout << "\n withdraw :: ";
    cout << "Enter amount to withdraw :: ";
    cin >> amount;
    balance=balance-amount;
    cout << "Now total amount is left :: " << balance;

}

int main() 
{
    int ch, x;
    bank obj;
    do{
    cout << "1) Open account \n";
    cout << "2) Deposit Money \n";
    cout << "3) Withdraw Money \n";
    cout << "4) Display Account \n";
    cout << "5) Exit";
    cout << "Select the option from above \n";
    cin >> ch;


    switch(ch)
    {
        case 1: 
        cout << "1) Open account \n";
        obj.open_account();
        break;

        case 2: 
        cout << "2) Deposit Money \n";
        obj.deposit_money();
        break;

        case 3:
        cout << "3) Withdraw Money : \n";
        obj.withdraw_money();
        break;

        case 4:
        cout << "4) Display Account \n";
        obj.display_account();
        break;
        case 5:
        if(ch==5)
        {
            exit(1);
        }
        default:
        cout << "This is not exist try again \n";


    }
    cout << "\n Do you want to select next option then press :: y";
    cout << "\n Do you want to select next option then press :: y \n";
    cout << "If you want to exit then press :: N ";
    x=getch();

    if(x=='n' || x=='N') 
    {
        exit(0);
    }
    }

    getch();
    return 0;
}