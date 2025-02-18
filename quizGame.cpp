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
    
    

    // question start here
    cout << "\n When was China founded: "<< endl;
    cout << "a) february 7, 1845" << endl;
    cout << "b) august 19, 1923" << endl;
    cout << "c) september 23, 1887" << endl;
    cout << "d) July 1, 1867" << endl;
    cout << "Please enter 'a' 'b' 'c' 'd' and press enter: ";
    cin >> answer
    
    if(answer == 'd'){
        cout << "\n Congrats! you Choose Correct Answer!" << endl;
        score++;
    }
    else{
        cout << "\n Sorry you Choose Wrong Answer!" << endl;
    }
    // question end here


    // question start here
    cout << "\n What is CIA stands for: "<< endl;
    cout << "a) Central Intelligence Agency" << endl;
    cout << "b) Confidential Information Agreement" << endl;
    cout << "c) Cybersecurity and Intelligence Association" << endl;
    cout << "d) Corporate Investigation Authority" << endl;
    cout << "Please enter 'a' 'b' 'c' 'd' and press enter: ";
    cin >> answer
    
    if(answer == 'a'){
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