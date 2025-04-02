#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;



class Market
{
    private:
    string name;
    int Quantity, Price;
    public:
    Market(): Name(""), Quantity(0), Price(0){}



    setName(string name)
    {
        Name = name;
    }


    setQuant(int quantity)
    {
        Quantity = quantity;
    }



    string getName()
    {
        return Name;
    }
};