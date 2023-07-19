#include <iostream>

using namespace std;

class ComplexNum{
    private:
        int real;
        int img;
    public:
        void add(ComplexNum,ComplexNum);
        void putdata(int x, int y){
            real = x;
            img = y;
        }
        void putdata(){
            cout<<real<<"+i"<<img<<endl;
        }
};

void ComplexNum :: add(ComplexNum obj1, ComplexNum obj2){
    real = obj1.real + obj2.real;
    img = obj1.img + obj2.img;
}

int main(void){
    ComplexNum c1,c2,c3;
    c1.putdata(3,5);
    c2.putdata(12,6);
    c3.add(c1,c2);
    c1.putdata();
    c2.putdata();
    c3.putdata();
    return 0;
}