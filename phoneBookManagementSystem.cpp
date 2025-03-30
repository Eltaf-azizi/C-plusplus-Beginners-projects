#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>

using namespace std;


class PhoneBook
{
    private:
    string Name, PhNo, Address;
    public:
    PhoneBook(): Name(""), PhNo(""), address(""){}


    setName(string name)
    {
        Name = name;
    }


    setPhNo(string phNo)
    {
        PhNo = phNo;
    }


    setAddress(string address)
    {
        Address = address;
    }



    string getName()
    {
        return Name;
    }


    string getPhNo()
    {
        return PhNo;
    }


    string getAddress()
    {
        return Address;
    }
};


int main()
{
    PhoneBook ph;


    while()
    {
        
    }
}