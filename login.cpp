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