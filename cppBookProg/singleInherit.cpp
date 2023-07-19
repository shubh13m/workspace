#include<iostream>
using namespace std;

class B{
        int a;
    public :
        int b;
        void set(void){
            cout << "set in B"<< endl;;
            a = 10;
            b = 3;
        }
        int getA(void){
            cout << "getA in B"<< endl;;
            return a;
        }
        void show(void){
            cout << "show in B"<< endl;;
            cout << "a : " << a << endl;
            cout << "b : " << b << endl; 
        }
};

class D : public B {
        int c;
    public :
        void setC(void){
            cout << "setC in D"<< endl;;
            c = 7;
        }
        void showC(void){
            cout << "showC in D"<< endl;;
            show();
            cout<< "c : " << c <<endl;
        }
};

int main(void){

    D d;

    d.set();
    cout << "A : " << d.getA() << endl;
    d.setC();
    d.show();
    d.showC();

    return 0;
}