#include<iostream>
#include<conio.h>
#include<Windows.h>
uisng namespace std;


enum Direction{STOP = 0, LEFT, RIGHT, UP, DOWN};
Direction dir;
bool gameOver;
const int height = 20;
const int width = 20;
int headX, headY, fruitX, fruitY, score;
int tail_len;


void setup();
void draw();
void input();
void logic();

int main() {
    char start;
    cout<< "\t------------------------------------" << endl;
    cout<< "\t\t :Snake King:" << endl;
    cout<< "\t------------------------------------" << endl;
    cout<< "\tPress 's' to start: ";
    cin >> start;

    if(start == 's') {
        setup();
    }
    return 0;
}

void setup(){

}


void draw(){

}


void input(){

}


void logic(){
    
}