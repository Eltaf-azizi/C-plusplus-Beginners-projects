#include<iostream>
#include<cmath>
using namespace std;



int main() {

    int choice;
    float area, radius, length, width;
    
    cout << "1- Area of Circle"endl;
    cout << "2- Area of Rectangle"endl;
    cout << "3- Area of Square"endl;
    cout << "Enter your choice :: ";
    cin>>choice;


    switch(choice) {
        case 1:
            cout <<"Enter the radius of the Circle :: ";
            cin>>radius;
            area = 3.14 * pow(radius, 2);
        break;

        case 2:
            cout << "Enter the Length of the rectangle :: ";
            cin>>length;
            cout << "Enter the width of the Rectangle :: ";
            cin>>width;
            area = length * width;
        break;

        case 3:
            cout << "Enter the Length of side of the Square :: ";
            cin>>length;
            area = pow(length.2);
        break;

        default:
            cout << "\nInvalid Choice...!";
    }
    
    cout << "\nArea :: "<<area<<endl;
    return 0;

}