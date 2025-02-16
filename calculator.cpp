#include <iostream>
#include <cmath>
using namespace std;


int main() {

    // define variables
    string operation;
    double number1 = 2, number2 = 3;

    // get user input
    cout << "Enter First Number: ";
    cin >> number1;

    cout << "Enter Operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter Second Number: ";
    cin >> number2;

    // if else statement checking entered operation
    if (operation == "+") {
        cout << number1 + number2;
    }
    else if (operation == "-") {
        cout << number1 - number2;
    }
    else if (operation == "*") {
        cout << number1 * number2;
    }
    else if (operation == "/") {
        cout << number1 / number2;
    }
    else {
        cout << "Not a Recognized operation!";
    }

    return 0;
}