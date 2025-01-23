#include<iostream>
#include<fstream>
using namespace std;


class temp{

    string id, name, author;
    fstream file;
    public:
    void addBook();
    void showAll();
    void extractBook();

}

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
        cout << "Invalid Choice...!";
    }

    return 0;
}


void temp :: addBook(){
    cout << "\nEnter Book ID :: ";
    getline(cin, id);
    cout << "Enter Book Name :: ";
    getline(cin, name);
    cout << "Enter Book's Author Namme :: ";
    getline(cin, author);

    file.open("bookData.txt",ios :: out | ios :: app);
    file<<id<<"*"<<name<<"*"<<author<<ednl;
    file.close();
}


void temp :: showAll(){

    file.open("bookData.txt", ios :: in);
    getline(cin, id, '*');
    getline(cin, name, '*');
    getline(cin, author, '\n');

    while(!file.eof()) {

        cout << "\n\n";
        cout << "\t\tBook Id \t\t\t Book Name \t\t\t Author's Name";
    }

}