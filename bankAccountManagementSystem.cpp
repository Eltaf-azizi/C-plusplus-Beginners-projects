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


}