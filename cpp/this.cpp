#include<iostream>
using namespace std;

class Number{
    public:
        int x;
        int y;
        int sum;

        Number(){
            this->x =13;
            this->y = 24;
        }
        Number(int a, int b){
            this -> x = a;
            this -> y = b;
        }
        int add(){
            this->sum = this->x + this->y;
            return this->sum;
        }

        Number comp(Number p){
            if(p.sum > this->sum){
                return p;
            }
            else return *this;
        }
};

int main(void){

    Number n, m(10,20);
    cout << n.add() << endl;
    cout << m.add() << endl;

    Number l = n.comp(m);

    cout << "x : " << l.x << "\n + \ny : " << l.y << "\n = \n"<<l.sum << endl;
    return 0;
}