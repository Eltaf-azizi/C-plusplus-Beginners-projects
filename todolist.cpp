#include <iostream>
using namespace std;

void banner();

int main() {
    
    system("cls");
    while(true){

        banner();
        cout << "\n\t1. Add Task";
        cout << "\n\t2. Show Task";
        cout << "\n\t3. Search Task";
        cout << "\n\t4. Delete Task";
        cout << "\n\t5. Update Task";

        int choice;
        cout << "\n\tEnter Choice: ";
        cin >> choice;
    }

    return 0;
}