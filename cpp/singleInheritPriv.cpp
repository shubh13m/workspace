#include<iostream>
using namespace std;

class B{
        int a;
    public:
        int b;
        void set(void){
            cout << "In set of B" << endl;
            a = 10;
            b = 6;
        }
        void show(void){
            cout << "In show of B" << endl;
            cout << "A and B" << a << b << endl;
        }
};

class D : private B{
        int c;
    public:
        void setAnB(void){
            set();
        }
        void setC(void){
            cout << "Inside setC of D" << endl;
            c = 2;
        }

        void showAll(void){
            cout << "Inside showAll of D" << endl;
            show();
            cout << "C " << c << endl;
        }
};

int main(void){

    D d;
    //d.set();
    //d.show();
    d.setAnB();
    d.setC();
    d.showAll();

    return 0;
}