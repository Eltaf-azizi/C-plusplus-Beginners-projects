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

    }
    while(choice == 'Y' || choice == 'y');
}