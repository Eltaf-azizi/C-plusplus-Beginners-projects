#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;


string getPassword(int length){
    string password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+";
    int charSize = characters.size();
    srand(time(0));
    int randomIndex;
    for(int i=0; i<length;i++) {
        randomIndex = rand() % charSize;
        password = Password + characters[randomIndex];
    }
    return password;
}

int main() [
    int length;
    cout << "Enter the length of the Password :: ";
    cin>>length;
    string password;
    cout << "Generated Password :: "<<password;

    return 0;
]