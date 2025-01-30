#include<iostream>
#include<fstream>
using namespace std;


class temp{

        string itemID, itemName;
        int itemQuantity, itemPrice;   
        fstream file;

    public:
    void addProduct(void);
    void viewProduct(void);
    void buyProduct(void);
}obj;


int main() {
    
    cout << "press 1 --> Start Shopping";
    cout << "press 0 --> Exit";
    cin>>choice;

    switch(choice) {
        case 'A':
        break;

        case 1:
        break;

        case 0:
            system("exit");
        break;

        default:
            cout << "Invalid Selection...!";
        break;
    }

    return 0;
}



void temp :: addProduct() {

    cout << "Enter Product ID :: ";
    cout << "Enter Product Name :: ";
    cout << "Enter Product Quantity :: ";
    cout << "Enter Product Price :: ";
    
}