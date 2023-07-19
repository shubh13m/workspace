#include<iostream>
using namespace std;

class Base {
    private :
        int a;
    protected :
        int b;
    public :
        int c;
        void setAll(void) { 
            a = 2;
            b = 5; 
            c = 7;
        }
};

class Derived : protected Base  {
        void setA(){
            setAll();
            a = 32;
            b = 10;
            c = 5;
        }
};

class Derived2 : public Derived{
        void setB(){
            setAll();
            a = 32;
            b = 10;
            c = 5;
        }

};

int main(void){
    Base b1;
    b1.c  = 6;
    
    Derived d;
    d.a = 3;
    d.b = 2;
    d.c = 10;

    Derived2 e;
    e.a = 6;
    e.b = 1;
    e.c = 2;

    return 0;
}