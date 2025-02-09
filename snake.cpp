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
int tailx[100], taily[100];
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
        while(!gameOver){
            draw();
            input();
            logic();
            sleep();
            // system("cls");
            gameOver = true;
        }
    }
    return 0;
}

void setup(){
    gameOver = False;
    dir = STOP;
    headX = width/2;
    headY = height/2;
    fruitY = rand()%width;
    fruitY = rand()%height;
    score = 0;
}


void draw(){
    system("cls");
    
    // Upper Border
    cout << "\t\t";
    for(int i=0; i<width-8; i++){
        cout << "||";
    }
    cout << endl;

    // Snake, fruit, space and side borders
    for(i=0; i<height; i++){
        for(j=0; j<width; j++){
            if(j==0){
                cout<<"\t\t||";
            }
            //snake head
            if(i == headY && j == headX){
                cout << "O";
            }
            // fruit
            else if(i == fruitY && j == fruitX) {
                cout << "*";
            }
            //space, snake tail
            else{
                bool print = false;
                //tail
                for(int k=0; k<tail_len; k++){
                    if(tailx[k] == j && taily[k] == i) {
                        cout << "o";
                        print = true;
                    }
                }
                //space
                if(!print) {
                    cout<< "";
                }
            }
            // right border
            if(j == width-1) {
                cout << "||";
            }
        }
        cout << endl;
        cout << "\t\t\tScore: " << score << endl;
    }

    // Lower Border
    cout << "\t\t";
    for(int i=0; i<width-8; i++){
        cout << "||";
    }
}


void input(){

}


void logic(){
    
}