#include<iostream>
#include<fstream>
using namespace std;


class temp {
    string rollNum, name, fName, address, search;
    fstraem file;
    public:
    void addStu();
    void viewStu();
    void searchStu();
};

int main() {
    char choice;
    cout << "------------------------------------";
    cout << " 1- Add Student Record";
    cout << "2- View All Student Record";
    cout << "3- Search Student Record";
    cout << "4- Exit";
    cout << "------------------------------------";
    cin>> choice;

    switch(choice){
        
        case '1':
        break;

        case '2':
        break;

        case '3';
        break;

        case '4';
        break;

        default:
        cout << "Invalid choice...!";
    }
}


void temp :: addStu() {

    cout << "Enter Student Roll Number :: ";
    getline(cin, rollNum);
    cout << "Enter Student Name :: ";
    getline(cin, name);
    cout << "Enter Father Name :: ";
    getline(cin, fName);
    cout << "Enter Address :: ";
    getline(cin, address);
}