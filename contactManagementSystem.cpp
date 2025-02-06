#include<iostream>
#include<fstream>
using manespace std;

class temp{

    string phoneNo, name, address, description;
    fstream file;
    public:
    void addContact();
    void showAll();
    void searchContact();
};

int main() {


    return 0;
}


void temp :: addContact(){
    cout << "Enter phone Number :: ";
    getline(cin, phoneNo);
    cout <<"Enter Name :: ";
    getline(cin, name);
    cout << "Enter Address :: ";
    getline(cin, address);
    cout << "Enter Description :: ";
    getline(cin, description);

    file.open("data.csv", ios :: out | ios :: app);
    
}