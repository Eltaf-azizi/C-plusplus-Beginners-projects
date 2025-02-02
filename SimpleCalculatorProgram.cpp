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

    obj.getValue1();

    while (1){
    obj.getOp();
    if (obj.op == '='){
        cout<<"\nFinal answer :: "<<obj.a<<endl;
        break;
        return 1;
    }
    obj.getValue2();

    if(obj.op == '+')
        obj.add();

    if(obj.op == '-')
        obj.sub();

    if(obj.op == '*')
        obj.mul();

    if(obj.op == '/')
        obj.divide();
    }
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


void temp :: add() {
    c = a + b;
    cout<<a<< " + "<<b<<" :: "<<c <<endl;
    a = c;
    b = 0;
}


void temp :: sub() {
    c = a - b;
    cout<<a<< " - "<<b<<" :: "<<c <<endl;
    a = c;
    b = 0;
}


void temp :: mul() {
    c = a * b;
    cout<<a<< " * "<<b<<" :: "<<c <<endl;
    a = c;
    b = 0;
}


void temp :: divide() {
    c = a / b;
    cout<<a<< " / "<<b<<" :: "<<c <<endl; 
    a = c;
    b = 0;
}