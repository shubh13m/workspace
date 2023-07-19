#include<iostream>

using namespace std;

class GFather{
    private:
        int x;
    protected:
        int y;
        void sety(void){
            y = 5;
        }
    public:
        int z;
        void setz(void){
            z = 10;
        }
        void setx(void){
            x = 15;
        }
        int getx(void){
            return x;
        }
};

class Father : public GFather{
    public:
        void setGFather(void){
            y = 21;
        }
};

class Mother{
    private:
        int a;
    protected:
        int b;
        void setb(void){
            b = 3;
        }
    public:
        int c;
        void setc(void){
            c = 6;
        }
        void seta(void){
            a = 9;
        }
        int geta(void){
            return a;
        }
        void display(void){
            cout << "a : " << geta() << endl;
        }
};

class Child : public Father, public Mother{

    public:
        void setFather(void){
            sety();
        }
        void display(void){
            // cout << "a : " << geta() << endl;
            // cout << "b : " << b << endl;
            // cout << "c : " << c << endl;
            cout << "x : " << getx() << endl;
            cout << "y : " << y << endl;
            cout << "z : " << z << endl;
        }
};

int main(void){

    Child p;
    p.z = 1;
    p.setx();
    p.setFather();
    p.display();
    p.setz();
    p.setGFather();
    p.display();
    p.seta();
    p.Mother::display();

    return 0;
}