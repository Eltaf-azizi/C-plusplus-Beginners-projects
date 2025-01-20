#include <iosream>
#include <fstream>
using namespace std;


class temp{
    
    string userName, Email, password;
    fstram file;
    public:
    void login();
    void signUP();
    void forgot();

}obj;



int main() {
    char choice;
    cout <<"\1- Login";
    cout <<"\2- Sign-Up";
    cout <<"\3- Forgot Password";
    cout <<"\4- Exit";
    cout <<"\nEnter Your Choice :: ";
    cin>> choice;

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
    cout << "Enter Your User Name :: " << endl;
    getline(cin, searchName);
    cout << "Enter Your Password :: " endl;
    getline(cin, searchPass);

    file.open("loginData.txt", ios, :: in);
    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file,password, '\n');
    while(!file.eof()){
        if (userName == searchPass) {
            cout << "\nAccount Login Successfull...!";
            cout << "\nUsername :: " << userName,,endl;
            cout<< "\nEmail :: "<<Email <<endl;
        }
    }
}