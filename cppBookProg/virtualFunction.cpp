#include<iostream>
using namespace std;

class Base{
    public :
        int x;

        virtual void  show(){
            cout << x << endl;;
        }
};

class Derived : public Base{
    public :
        int y;

        void show(){
            cout << x << endl << y << endl;
        }
};

int main(void){
    Base b;
    Derived d;

    Base *ptr = &b;

    ptr -> x = 10;
    ptr -> show();

    ptr = &d;

    d.y = 20;
    ptr -> x = 15;
    ptr -> show();

    return 0;
}