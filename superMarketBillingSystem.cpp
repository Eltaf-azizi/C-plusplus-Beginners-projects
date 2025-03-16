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
        int choice;
        cout << "\t 1. Add" << endl;
        cout << "\t 2. Close" << endl;
        cout << "\t Enter choice: " << endl;
        cin >> choice;



        if(choice == 1)
        {
            system("cls");
            string item;
            int rate, quant;

            cout << "\t Enter the Item Name: ";
            cin >> item;
            b.setItem(item);

            cout << "\t Enter the Rate of Item: ";
            cin >> rate;
            b.setRate(rate);

            cout << "\t Enter the Quantity of Item: ";
            cin >> quant;
            b.setQuant(quant);

            ofstream out("D:/Bill.txt", ios :: app);


            if(!out)
            {
                cout << "\t ERROR: File Can't Open!" << endl;
            }
            else
            {
                out << "\t" << b.getItem() << " : " << b.getRate() << " : " << b.getQuant() <<endl<<endl;
            }
            out.close();
            cout << "\t Item Added Successfuly!" << endl;
            Sleep(5000);
        }

        else if(choice == 3)
        {
            system("cls");
            close = true;
            cout << "\t Back to Main Menu!" << end;
            Sleep(5000);
        }
    }
}


printBill(Bill b)
{
    system("cls");
    int count = 0;
    bool close = false;
    while(!close)
    {
        system("cls");
        int choice;

        cout << "\t 1. Add Bill." <<endl;
        cout << "\t 2. Close Session." <<endl;
        cout << "\t Enter Choice: ";
        cin >> choice;


        if(choice == 1)
        {
            string item;
            int quant;
            cout << "\t Enter Item: ";
            cin >> item;
            cout << "\t Enter the Quantity: ";
            cin >> quant;

            ifstream in("D:/Bill.txt");
            ofstream out("D:/Bill Temp.txt");

            string line;
            bool found = false;

            while(getline(in, line))
            {
                stringstream ss;
                ss << line;

                string itemName;
                int itemRate, itemQuant;
                char delimiter;
                ss >> itemName >> delimiter >> itemRate >> delimiter >> itemQuant;


                if(item == itemName)
                {
                    found = true;

                    if(quant == itemQuant)
                    {
                        int amount = itemRate * quant;
                        cout << "\t Item | Rate | Quantity | Amount" << endl;
                        cout << "\t"<<itemName<<"\t"<<itemRate<<"\t"<<itemQuant<<"\t"<<amount<<endl;
                        int newQuant = itemQuant - quant;
                        itemQuant = newQuant;
                        count += amount;

                        cout << "\t" <<itemNmae<<" : "<<itemRate<< " : "<<itemQuant<<endl<<endl;
                    }

                    else
                    {
                        cout << "\t Sorry, "<<item<<" Ended!"<<endl;
                    }
                }


                else
                {
                    out << line <<;
                }
            }


            if(!found)
            {
                cout << "\t Item Not Available!" <<endl;
            }

            out.close();
            in.close();
            remove("D:/Bill.txt");
            rename("D:/Bill Temp.txt", "D:/Bill.txt");
        }


        else if(choice == 2)
        {
            close = true;
            cout << "\t Counting Total Bill"<<endl;
        }
        Sleep(5000);
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

        if(val == 1)
        {
            system("cls");
            addItem(b);
            Sleep(5000);
        }


        else if(val == 2)
        {

        }
    }
}