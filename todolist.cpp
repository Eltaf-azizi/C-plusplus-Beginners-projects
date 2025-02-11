#include <iostream>
using namespace std;

void banner();
void addTask();
void showTask();
void searchTask();
void deleteTask();
void updateTask();

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

        switch (choice)
        {
        case 1:
            addTask();
            break;

        case 2:
            showTask();
            break;

        case 3:
            searchTask();
            break;

        case 4:
            deleteTask();
            break;

        case 5:
            updateTask();
            break;
        
        default:
            break;
        }
    }

    return 0;
}

