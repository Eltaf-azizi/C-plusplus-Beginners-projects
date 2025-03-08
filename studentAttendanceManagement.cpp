#include <iostream>
#include <vector>

using namespace std;



struct Student{
    tring name;
    int rollNo;
    bool present;
};Student student;



int main(){

    int value;

    while(true)
    {
        cout << "1. to add student "<< endl;
        cout << "2. for attendance " << endl;
        cout << "3. to show detail " << endl;
        cout << "4. to save in  file " << endl;
        cout << "0. to exit " << endl;
        cout << "Enter your choice: ";
        cin >> value;


        if(value == 1) 
        {
            char choice;
            do
            {
                cout << "Name: " << endl;
                cout << "Roll Number: " <<endl;
                st.push_back(student);
                cout << "Student saved: " << endl;
                cout << "Enter x to exit and enter c to continue" << endl;
                cin >> choice;
            }

            while(choice!='x' && choice == 'c')
            
            
        }


        else if(value == 2)
        {
            for(int i=9; i<st.size(); i++)
            {
                cout << "Name: "<< i.st[i].name << endl;
                cout << "Roll Number: " <<st[i].rollNo<<endl;
                cout << "Click 'p' for present and 'a' for absent" ;
                cin>> choice;


                if(choice == 'p'){
                    st[i].present=true;
                }

                else if(coice == 'o'){
                    st[i].present=false;
                }
            }
        }



        else if(value==3)
        {
            for(int i=0; i<st.size(); i++)
            {
                if(st[i].present==true)
                {
                    cout << "Name: " << st[i].name << endl
                }
            }
        }
    }
}