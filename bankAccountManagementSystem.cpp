#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>

using namespace std;


class Account
{
    private:
    string AccountNo, Password;
    int Balance;

    public:
    Account():AccountNo(""), Password(""), Balance(0){}



    setAccountNo(string id)
    {
        AccountNo = id;
    }


    setPassword(string pw)
    {
        Password = pw;
    }


    setBalance(int balance)
    {
        Balance = balance;
    }


    string getAccountNo()
    {
        return AccountNo;
    }


    string getPassword()
    {
        return Password;
    }


    int getBalance()
    {
        return Balance;
    }
};



openAccount(Account user)
{
    system("cls");
    string id, pw;

    cout << "\t Enter Account Number: ";
    cin >> id;
    user.setAccountNo(id);
    


    cout << "\t Enter a Strong Password: ";
    cin >> pw;
    user.setPassword(pw);

    user.setBalance(0);

    ofstream outfile("D:/Account.txt", ios::app);

    if(!outfile)
    {
        cout << "\t Error: File Can't Open!" <<endl;
    }
    else
    {
        outfile<<"\t" << user.getAccountNo() << " : " <<user.getPassword() << " : "
        << user.getBalance() <<endl <<endl;
        cout << "\t Account Created Successfuly!" <<endl;
    }
    
    outfile.close();
    Sleep(5000);
}


addCash()
{
    system("cls");
    string id;
    cout << "\t Enter Account Number: ";
    cin >> id;

}




int main()
{
    Account user;

    bool exit = false;
    while(!exit)
    {
        system("cls");
        int val;
        cout << "\t Welcome to Bank Management System" <<endl;
        cout << "\t *********************************" <<endl;
        cout << "\t 1. Open New Account." <<endl;
        cout << "\t 2. Add Cash." <<endl;
        cout << "\t 3. Withdraw Cash." <<endl;
        cout << "\t 4. Exit." <<endl;
        cout << "\t Enter your Choice: ";
        cin >> val;



        if(val == 1)
        {
            openAccount(user);
        }


        else if(val == 2)
        {

        }
        Sleep(5000);
        
    }
} 