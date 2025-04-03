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

    ofstream out("D:/Super Market.txt", ios::app);

    if(!out)
    {
        cout << "File Can't Open!" <<endl;
    }
    else
    {
        out<< m.getName() << " , " << m.getQuant()<< " , "<< m.getPrice() <<endl;
        cout << "Item Save Successfuly!" <<endl;
    }
    out.close();
}



search(Market m)
{
    string name;
    cout << "Enter Name of Item: ";
    cin >> name;

    ifstream in("D:/Super Market.txt");
}


int main()
{
    Market m;
    bool exit = false;

    while(!exit)
    {
        system("cls");
        cout << "Welcome to Super Market Management System" <<endl;
        cout << "*****************************************" <<endl;
        cout << "1. Add Items" <<endl;
        cout << "2. Search Items" <<endl;
        cout << "3. Exit" <<endl;
        cout << "Enter Choice: ";
        int val;
        cin >> val;


        if(val == 1)
        {
            system("cls");
            addItem(m);
            Sleep(5000);
        }



        else if(val == 2)
        {

        }
    }
}