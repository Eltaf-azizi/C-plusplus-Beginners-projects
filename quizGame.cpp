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

    char answer;
    cout << "\n How much is 3+3 :"<< endl;
    cout << "a) 4" << endl;
    cout << "b) 6" << endl;
    cout << "c) 3" << endl;
    cout << "d) 0" << endl;
    cout << "Please enter 'a' 'b' 'c' 'd' and press enter: ";
    cin >> answer

    if(answer == 'b'){
        cout << "\n Congrats! you Choose Correct Answer!" << endl;
    }
    else{
        cout << "\n Sorry you Choose Wrong Answer!" << endl;
    }

}



void end_game(){

}