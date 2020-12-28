#include <iostream>

using namespace std;

class ComplexSwap{
    private:
        int real,img;
    public:
        void putdata(){
            cout <<real<<" +i "<<img<<endl;
        }
        void getdata(int x, int y){
            real = x;
            img = y;
        }
        friend void swap(ComplexSwap &);
};

void swap(ComplexSwap &c){
    int z;
    z = c.img;
    c.img = c.real;
    c.real = z;
};

int main(void){
    ComplexSwap c1;
    c1.getdata(10,5);
    c1.putdata();
    swap(c1);
    c1.putdata();
    return 0;
}