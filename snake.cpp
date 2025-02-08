#include<iostream>
#include<conio.h>
#include<Windows.h>
uisng namespace std;


int main() {
    char start;
    cout<< "\t------------------------------------" << endl;
    cout<< "\t\t :Snake King:" << endl;
    cout<< "\t------------------------------------" << endl;
    cout<< "\tPress 's' to start: ";
    cin >> start;

    if(start == 's') {
        cout << "\tGame Start";
    }
    return 0;
}