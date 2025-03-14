#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


void drawLine(int n, char symbol)
{
    for (int i=0; i<n; i++)
        cout << symbol;
    cout << "\n";
}

void rules()
{
    system("cls");
    cout << "\n\n";
    drawLine(80, '-');
    cout << "\t\t RULES OF THE GAME \n";
    drawLine(80, '-');
    cout << "\t 1.  Choose any number between 1 to 10\n";
    cout << "\t 2.  If you win you will get 10 times more money than you bet\n";
    cout << "\t 3.  If you bet on wrong number you will lose you money\n";
    drawLine(80, '-');
}


int main() 
{
    string playerName;
    int amount;
    int bettingAmount;
    int guess;
    int dice;
    char choice;

    srand(time(0));

    drawLine(60, '_');
    cout << "\n\n\n\t\t CASINO GAME \n\n\n\n";
    drawLine(60, '_');

    cout << "\n\n Enter Your Name: ";
    getline(cin, playerName);

    cout << "\n\n Enter deposit amount to play : $";

    do
    {
        system("cls");
        rules();
        cout << "\n\n Your current balance is $ " << amount << "\n";

        do
        {
            cout << playerName << ", Enter money to bet : $";
            cin >> bettingAmount;

            if(bettingAmount > amount)
            {
                cout << "Your betting amount is more than your current balance\n";
                cout << "\nRe-enter data\n ";
            }
        }
        while(bettingAmount > amount);

        do
        {
            cout << "Guess your number to bet between 1 to 10: ";
            cin >> guess;

            if(guess <= 0 || guess > 10)
            {
                cout << "\nNumber should be between 1 to 10\n"
                << "Re-enter data\n";
            }
            (guess <= 0 || guess > 10);
            dice = rand() % 10 + 1;

            if(dice == guess)
            {
                cout << "\n\n Congratulations! You have won $ " << bettingAmount * 10;
                amount = amount + bettingAmount * 10;
            }
            else
            {
                cout << "Sorry you lost $ " << bettingAmount << "\n";
                amount = amount - bettingAmount;
            }

            cout << "\n The winning number was: " << dice << "\n";
            cout << "\n" << playerName << " You have $ " << amount << "\n";

            if(amount == 0)
            {
                cout << "You have no money to play";
                break;
            }

            cout << "Do you want to play (y/n)?";
            cin >> choice;
        }
        while(choice == 'Y' || choice == 'y');
    }
}

cout << "\n\n\n";
drawLine(70, '=');
cout << "\n\n Thanks for playing game. your balance is $" << amount;
drawLine(70, '=');