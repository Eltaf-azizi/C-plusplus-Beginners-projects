#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>

using namespace std;


class Bill
{
    private:
    string Item;
    int Rate, Quantity;

    public:
    Bill():Item(""), Rate(0), Quantity(0){ }

    void setItem(string item)
    {
        Item = item;
    }

    void setRate(int rate)
    {
        Rate = rate;
    }

    void setQuant(int quant)
    {
        Quantity = quant;
    }


    string getItem()
    {
        return Item;
    }

    int getRate()
    {
        return Rate;
    }

    int getQuant()
    {
        return Quantity;
    }
};