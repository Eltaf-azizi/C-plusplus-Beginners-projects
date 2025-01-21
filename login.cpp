#include <iostream>
#include <fstream>
using namespace std;

class temp{
    
    string userName, Email, password;
    string searchName, searchPass, searchEmail;
    fstream file;
    public:
    void login();
    void signUP();
    void forgot();

}obj;

int main() {
    char choice;
    cout <<"\n1- Login";
    cout <<"\n2- Sign-Up";
    cout <<"\n3- Forgot Password";
    cout <<"\n4- Exit";
    cout <<"\nEnter Your Choice :: ";
    cin>> choice;
    cin.ignore(); // To ignore the newline character left in the buffer

    switch(choice){

        case '1':
            obj.login();
        break;

        case '2':
            obj.signUP();
        break;

        case '3':
            obj.forgot();
        break;

        case '4':
            return 0;
        break;

        default:
        cout << "Invalid selection...!";
    }
}
void temp :: signUP() {
    cout << "\nEnter Your User Name :: ";
    getline(cin, userName);
    cout << "Enter Your Email Address :: ";
    getline(cin, Email);
    cout << "Enter Your password :: ";
    getline(cin, password); 

    file.open("loginData.txt", ios :: out | ios :: app);
    file<<userName<<"*"<<Email<<"*"<<password<<endl;
    file.close();
}

void temp :: login(){
    string searchName, searchPass;
    cout << "---------LOGIN---------"<< endl;
    cout << "Enter Your User Name :: ";
    getline(cin, searchName);
    cout << "Enter Your Password :: ";
    getline(cin, searchPass);

    file.open("loginData.txt", ios :: in);
    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file,password, '\n');
    while(!file.eof()){
        if (userName == searchName) {
            if (password == searchPass){
                cout << "\nAccount Login Successfull...!";
                cout << "\nUsername :: " << userName << endl;
                cout<< "\nEmail :: "<<Email <<endl;
            }
            else{
                cout << "Password is incorrect!...";
            }
        }

    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file,password, '\n');
    }
    file.close();
}
void temp :: forgot(){
    cout << "Enter your UserName ::";
    getline(cin, userName);
    cout << "Enter Your Email address :: ";
    getline(cin, searchEmail);

    file.open("loginData.txt", ios :: in);
    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');

    while(!file.eof()){
        if(userName == searchName){
            if(Email == searchEmail){
                cout << "\nAccount Found...!" <<endl;
                cout << "Your Password :: "<<password<<endl;
            }
            else{
                cout << "Not Found...!\n";
            }
        }
        else{
            cout << "Not found...!\n";
        }
    }
    file.close();
}