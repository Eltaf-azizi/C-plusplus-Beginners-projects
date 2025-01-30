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
    cin>>itemID;
    cout << "Enter Product Name :: ";
    cin>>itemName;
    cout << "Enter Product Quantity :: ";
    cin>>itemQuantity;
    cout << "Enter Product Price :: ";
    cin>>itemPrice;

    file.open("data.txt", ios, :: out | ios :: app);
    file << itemID << "\t" << itemName << "\t" << itemQuantity << "\t" << itemPrice << endl;
    file.close();
    
}


void temp :: viewProduct() {
    file.open("data.txt", ios :: in);

    while(!file.eof){
        file>>itemID>>itemName>>itemQuantity>>itemPrice;
    }
}