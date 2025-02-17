#include <iostream>
using namespace std;


void start_game();
void end_game();

int main() {
    string user_input;
    cout << "================ Welcome! =================";
    cout << "If you to play game then enter 'play' to start: ";

    cin >> user_input;

    if(user_input == "play") {
        start_game();
    }
    else{
        end_game();
    }

}



void start_game(){

}



void end_game(){

}