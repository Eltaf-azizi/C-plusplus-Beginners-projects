#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>

using namespace std;


class PhoneBook
{
    private:
    string Name, PhNo, Address;
    public:
    PhoneBook(): Name(""), PhNo(""), address(""){}


    setName(string name)
    {
        Name = name;
    }


    setPhNo(string phNo)
    {
        PhNo = phNo;
    }


    setAddress(string address)
    {
        Address = address;
    }



    string getName()
    {
        return Name;
    }


    string getPhNo()
    {
        return PhNo;
    }


    string getAddress()
    {
        return Address;
    }
};



addNo(PhoneBook ph)
{
    system("cls");
    string name, phNo, address;


    cout << "\t Enter Name of User: ";
    cin >> name;
    ph.setName(name);


    cout << "\t Enter Phone Number: ";
    cin >> phNo;
    ph.setPhNo(phNo);


    cout << "\t Enter Address of User: ";
    cin >> address;
    ph.setAddress(address);
    
    ofstream outfile("D:/PhoneBook.txt", ios::app);

    if(!outfile)
    {
        cout << "\t Error: File Can't Open!" <<endl;
    }
    else
    {
        outfile << "\t" << ph.getName() << " : " << ph.getPhNo() << " : " 
        << ph.getAddress() << endl <<endl;
    }
    outfile.close();
    cout << "\t Phone Number Added to Phone Book!";
    Sleep(4000);
}



searchNo()
{
    system("cls");
    string name;
    cout << "\t Enter Name of User: ";
    cin >> name;

    ifstream infile("D:/PhoneBook.txt");
    if(!infile)
    {
        cout << "\t Error: File Can't Open!" <<endl;
    }
    else
    {
        string line;
        bool found = false;
        

        while(getline(infile, line))
        {
            stringstream ss;
            ss << line;
            string userName, userPhNo, userAddress;
            char delimiter;
            ss >> userName >> delimiter >> userPhNo >> delimiter >> userAddress;


            if(name == userName)
            {
                found = true;
                cout << "\t" << userName << "\t" userPhNo << "\t" << userAddress <<endl;
            }
        }

        if(!found)
        {
            cout << "\t User not Found In Phone Book!" <<endl;
        }

        infile.close();
        Sleep(5000);
    }
}


int main()
{
    PhoneBook ph;

    bool exit = false;
    while(!exit)
    {
        system("cls");
        int val;
        cout << "\t Welcome to Phone Book Management System" <<endl;
        cout << "\t ***************************************" <<endl;
        cout << "\t 1.Add Number" <<endl;
        cout << "\t 2. Search Number" <<endl;
        cout << "\t 3. Exit" <<endl;
        cout << "\t Enter your Choice: ";
        cin >> val;



        if(val == 1)
        {
            addNo(ph);
        }



        else if(val == 2)
        {
            searchNo();
        }
    }
}