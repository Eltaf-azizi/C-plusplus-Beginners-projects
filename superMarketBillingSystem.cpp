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
};