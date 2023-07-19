#include<iostream>
using namespace std;

class Base{
    public :
        int x;

        void  show(){
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

    Base *ptr;

    ptr = &b;
    ptr->x = 1;
    ptr->show();

    //ptr = ;
    ((Derived*) ptr)->show();

    Derived *ptr1 = &d;
    ptr1->x = 0;
    ptr1->y = 2;
    ptr1->show();

    return 0;
}