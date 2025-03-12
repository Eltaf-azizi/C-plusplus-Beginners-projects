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

    }
    while(choice == 'Y' || choice == 'y');
}