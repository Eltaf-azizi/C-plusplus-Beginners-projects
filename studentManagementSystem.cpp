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
}obj;

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
            obj.addStu();
        break;

        case '2':
            obj.viewStu();
        break;

        case '3';
            obj.searchStu();
        break;

        case '4';
            return 0;
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


    file.open("stuData.txt", ios :: out | ios :: app);
    file<<rollNum<<"*";
    file<<name<<"*";
    file<<fName<<"*";
    file<<address<<endl;

    file.close();
}



void temp :: viewStu() {

    file.open("stuData.txt", ios :: in);
    getline(file, rollNum, '*');
    getline(file, name, '*');
    getline(file, fName, '*');
    getline(file, address, '\n');

    while(!file.eof()) {
        cout << "Student Roll Number :: "<<rollNum;
        cout << "Student name :: "<<name;
        cout << "Student Father Name :: "<<fName;
        cout << "Student Address :: "<<address;


        getline(file, rollNum, '*');
        getline(file, name, '*');
        getline(file, fName, '*');
        getline(file, address, '\n');
    }
    file.close();
}


void temp :: searchStu() {
    
    cout << "Enter Student Roll Number :: ";
    getline(cin, search);

    file.open("stuData.txt", ios :: in);
    getline(file, rollNum, '*');
    getline(file, name, '*');
    getline(file, fName, '*');
    getline(file, address, '\n');


    while(!file.eof()) {
        if(rollNum == search) {
            cout << "Student Roll Number :: " << rollNum;
            cout << "Student Name :: " << name;
            cout << "Student's Father Name :: " << fName;
            cout << "Student address :: " << address;
        }
        getline(file, rollNum, '*');
        getline(file, name, '*');
        getline(file, fName, '*');
        getline(file, address, '\n');
    }
}