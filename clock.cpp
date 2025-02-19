#include <iostream>
#include <windows.h>
using namespace std;


int main(){

    int h, m, s, a, err;
    err = a = 0;

    while (err==0){
        cout << "enter hour: " << endl;
        cin >> h;
        cout << "enter minutes: " << endl;
        cin >> m;
        cout << "enter seconds: " << endl;
        cin >> s;

        if (h  <24 && m < 60 && s < 60){
            err++;
        }
        else{
            system("cls");
        }
    }

    return 0;

}