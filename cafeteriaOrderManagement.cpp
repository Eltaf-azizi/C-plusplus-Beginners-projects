#include <iostream>
#include <vector>

using namespace std;


class Menu
{
    private:
    string item;
    int price, itemNo;

    public:
    Menu(int ItemNo, string Item, int Price)
    {
        itemNo = ItemNo;
        item = Item;
        price = Price;
    }



    string getItem()
    {
        return item;
    }


    int getItemNo()
    {
        return itemNo;
    }


    int getPrice()
    {
        return price;
    }
};



class Cafe
{
    private:
    vector <Menu> ve;
    public:
    add(int ItemNo, string Item, int Price)
    {
        
    }
}