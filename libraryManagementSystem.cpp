#include<iostream>
#include<fstream>
using namespace std;

int main(){

    char choice;
    cout << "------------------------------------" << endl;
    cout << "1-Show all books" ;
    cout << "2-Extract book";
    cout << "3-Add book(ADMIN)";
    cout << "4-Exit";
    cout << "------------------------------------";
    cout << "Enter Your Choice :: ";
    cin >> choice;

    switch(choice){
        case '1':
        break;

        case '2':
        break;

        case '3':
        break;

        case '4':
        break;

        default:
        cout << "Invalid Choice";
    }
}