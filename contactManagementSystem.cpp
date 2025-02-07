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
}obj;

int main() {

    // obj addContact();

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
    file<<phoneNo<<","<<name<<","<<address<<","<<description<<"\n";
    file.close();
    
}



void temp :: showAll(){
    file.open("data.csv", ios :: in);

    getline(file, phoneNo, ',');
    getline(file, name, ',');
    getline(file, address, ',');
    getline(file, description, '\n');

    while(!file.eof()) {
        cout<<"Phone Number :: "<<phoneNo<<endl;
        cout<<"Phone Name :: "<<name<<endl;
        cout<<"Phone Address :: "<<address<<endl;
        cout<<"Phone Description :: "<<description<<endl;
    }
}