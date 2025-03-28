#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>

using namespace std;


class Login
{
    private:
    string LoginID, Password;

    public:
    Login():LoginID(""), Password(""){}



    void setID(string id)
    {
        LoginID = id;
    }


    void setPW(string pw)
    {
        Password = pw;
    }


    string getID()
    {
        return LoginID;
    }


    string getPW()
    {
        return Password;
    }
};


int main()
{
    Login log;
}