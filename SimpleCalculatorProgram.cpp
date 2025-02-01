#include<iostream>
using namespace std;


class temp{
    public:
    int a, b, c;
    char op;

    void getValue1();
    void getValue2();
    void getOp();
    void add();
    void sub();
    void mul();
    void divide();

}obj;

int main() {


    return 0;
}


void temp :: getValue1() {
    cout<<"Enter the Value :: ";
    cin>>a;
}


void temp :: getValue2() {
    cout<<"Enter the Value :: ";
    cin>>b;
}


void temp :: getOp() {
    cout<<"Enter the Operater :: ";
    cin>>op;
}