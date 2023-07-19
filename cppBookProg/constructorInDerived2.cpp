#include<iostream>
using namespace std;

class Father{
    public:
        int x;
        Father(int i){
            cout << "Inside Father constr" << endl;
            x = i;
        }
};

class Mother {
    public :
        int y;
        Mother(int j){
            cout << "Inside Mother const" << endl;
            y = j;
        }
};

class Child : public Mother, public Father{
    public:
        int z;
        Child(int i, int j , int k) : Father(i*y), Mother(j){
            cout << "Inside Childe Const"<< endl;
            z = k;    
        }
};

int main(void){

    Child c(3,6,10);
    cout << c.x << " " << c.y << " " << c.z ;
    return 0;
}