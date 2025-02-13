#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct todolist {
    int id;
    string task;
};

int ID;

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


void banner(){
    cout << "_____________________________" << endl;
    cout << "\t     My Todo" << endl;
    cout << "_____________________________" << endl;
}


void addTask() {
    system("cls");
    banner();
    todolist todo;
    cout << "Enter new task: " << endl;
    cin.get();
    getline(cin, todo.task);
    char save;
    cout << "Save? (y/n): ";
    cin >> save;
    if(save == 'y') {
        ID++;
        ofstream fout;
        fout.open("todo.txt", ios::app);
        fout << "\n" << ID;
        fout << "\n" << todo.task;
        fout.close();

        char more;
        cout << "Add more task? (y/n): ";
        cin >> more;

        if (more == 'y'){
            addTask();
        }
        else{
            system("cls");
            cout << "Added Successfully!" endl;
            return;
        }
    }
    system("cls");
}



void showTask(){
    system("cls");
    banner();
    todoList todo;
    ifstream fin;
    fin.open("todo.txt");
    cout << "Task: " << endl;


    while(!fin.eof){
        fin >> todo.id;
        fin.ignore();
        getline(fin, todo.task);
        if(todo.task != ""){
            cout << "\t" << todo.id << ": " << todo.task << endl;
        }

        else{
            cout << "\tEmpty!" << endl;
        }
    }
    fin.close();
    char exit;
    cout << "Exit? (y/n): ";
    cin >> exit;
    if(exit != 'y'){
        showTask();
    }
    system("cls");
}

void searchTask(){
    system("cls");
    banner();
    int id;
    cout << "Enter task id: ";
    cin >> id;
    todolist todo;
    ifstream fin("todo.txt");
    while(!fin.eof())
    {
        fin >> todo.id;
        fin.ignore();
        fetline(fin, todo.task);
        if(todo.id == id){
            system("cls");
            cout << "\t" << todo.id << ": " << todo.task << endl;
            return;
        }
    }
    system("cls");
    cout << "Not Found!" << endl;
    return;
}