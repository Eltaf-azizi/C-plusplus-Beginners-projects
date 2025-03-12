#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;



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
        while(guess <= 0 || guess > 10);
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
    }
    while(choice == 'Y' || choice == 'y');
}