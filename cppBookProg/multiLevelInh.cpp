#include<iostream>
using namespace std;

class Level1{
    private:
        int a;
    public:
        int b;
        void set(void){
            a = 10;
            b = 5;
        } 
        void show(void){
            cout << "a : " << a <<endl;
            cout << "b : " << b << endl;
        }
        int geta(void){
            return a;
        }
        void setA(int x){
            a = x;
        }
};

class Level2 : public Level1{
    private :
        int c;
    public :
        void setC(void){
            c = 3;
        }
        void show2(void){
            show();
            cout << "c : " << c <<endl;
        }
        void setAinB(int x){
            cout << "a is " << geta() << endl;
            setA(x);
        }

};

class Level3 : public Level2{
        private :
            int d;
    public :
        void setD(void){
            d = 3;
        }
        void show3(void){
            show2();
            cout << "d: " << d <<endl;
        }
        void setAinC(int x){
            cout << "a is " << geta() << endl;
            setA(x);
        }

};

int main(void){
    Level1 l1;
    l1.set();
    l1.show();
    cout << "a : " << l1.geta() << endl;
    l1.setA(500);
    cout << "a : " << l1.geta() << endl;

    cout << "---- Level2 ------ " << endl;
    Level2 l2;
    l2.b = 13;
    l2.set();
    l2.setC();
    l2.show2();
    cout << l2.geta() << endl;
    l2.setAinB(12);
    cout << l2.geta() << endl;

    cout << "---- Level3------ " << endl;
    Level3 l3;
    l3.setD();
    l3.setA(6);
    l3.set();
    l3.setC();
    l3.show2();
    l3.show3();

    return 0;
}