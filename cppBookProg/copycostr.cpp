#include<iostream>
using namespace std;

class Num{
    private:
        int x;
    public:
        Num(){
            x =0;
        }
        Num( int y){
            x = y;
        }
        Num(Num& n){
            x = n.x;
        }

        void putdata(){
            cout << "x :" << x <<endl;
        }
};


int main(void){

    Num n1;
    n1.putdata();
    Num n2(2);
    n2.putdata();
    Num n3(5);
    Num n4(n3);
    n4.putdata();
    return 0;
}