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



addItem(Bill b)
{
    bool close = false;

    while(!close)
    {
        
    }
}


int main()
{
    Bill b;
    bool exit = false;

    while(!exit)
    {
        system("cls");
        int val;
        cout << "\t Welcome to the Super Market Billing System" << endl;
        cout << "\t ******************************************" << endl;
        cout << "\t\t 1. Add Item." << endl;
        cout << "\t\t 2. Print bill." << endl;
        cout << "\t\t 3. Exit." << endl;
        cout << "\t\t Enter Choice: ";
        cin >> val;
    }
}