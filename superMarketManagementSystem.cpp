#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;



class Market
{
    private:
    string Name;
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


    setPrice(int price)
    {
        Price = price;
    }



    string getName()
    {
        return Name;
    }

    
    int getQuant()
    {
        return Quantity;
    }


    int getPrice()
    {
        return Price;
    }
};