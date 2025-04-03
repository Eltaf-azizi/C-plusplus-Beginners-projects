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



addItem(Market m)
{
    string name;
    int quant, price;

    cout << "Enter Name of Item: ";
    cin >> name;
    m.setName(name);


    cout << "Enter Quantity: ";
    cin >> quantity;
    m.setQuant(quant);


    cout << "Enter Price: ";
    cin >> price;
    m.setPrice(price);
}




int main()
{
    bool exit = false;

    while(!exit)
    {
        system("cls");
        cout << "Welcome to Super Market Management System" <<endl;
        cout << "*****************************************" <<endl;
        cout << "1. Add Items" <<endl;
        cout << "2. Search Items" <<endl;
        cout << "3. Exit" <<endl;
        int val;
        cin >> val;
    }
}