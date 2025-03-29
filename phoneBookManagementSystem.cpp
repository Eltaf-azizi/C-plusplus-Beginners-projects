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
};


int main()
{

}