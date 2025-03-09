#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int random(int min, int max)
{
    bool isFirst = true;

    if(isFirst)
    {
        srand(static_cast <unsigned int> (time(0)));
    }
    return min+rand() % (max-min + 1);
}



int main()
{

    int ladder[] = {5, 20, 35, 50, 65, 80, 92};
    int snake[] = {15, 25, 37, 54, 74, 34, 45};
    int board = 100;
    int maxPlayer = 2;
    bool gameOver = false;
    int current[maxPlayer] = {0};
    int player = 0;



    while(!gameOver)
    {
        cout << "Snake and Ladder game!";
        cout << "Current Player " player+1 << endl;
        cout << "=========================" << endl;


        for(iint =0; i<maxPlayer; i++)
        {
            cout << "Player " << i+1 << "is at the position" << current[i]<<endl;
        }

        cout << "=========================" endl;
    }
}