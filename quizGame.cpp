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
    int score = 0;

    // question start here
    cout << "\n How much is 3+3 :"<< endl;
    cout << "a) 4" << endl;
    cout << "b) 6" << endl;
    cout << "c) 3" << endl;
    cout << "d) 0" << endl;
    cout << "Please enter 'a' 'b' 'c' 'd' and press enter: ";
    cin >> answer

    if(answer == 'b'){
        cout << "\n Congrats! you Choose Correct Answer!" << endl;
        score++;
    }
    else{
        cout << "\n Sorry you Choose Wrong Answer!" << endl;
    }
    // question end here


    // question start here
    cout << "\n Who is the Founder of tesla :"<< endl;
    cout << "a) Bill Gates" << endl;
    cout << "b) Elon Musk" << endl;
    cout << "c) Jeff Bezos" << endl;
    cout << "d) Mark Zuckerberg" << endl;
    cout << "Please enter 'a' 'b' 'c' 'd' and press enter: ";
    cin >> answer
    
    if(answer == 'b'){
        cout << "\n Congrats! you Choose Correct Answer!" << endl;
        score++;
    }
    else{
        cout << "\n Sorry you Choose Wrong Answer!" << endl;
    }
    // question end here    

}



void end_game(){

}