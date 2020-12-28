#include<iostream>
using namespace std;

class Father{
    public:
        int age;
        Father(int x){
            cout << "Setting father age" << endl;
            age = x;
        }
};

class Mother{
    public:
        int age;
        Mother(int x){
            cout << "settting mothers age" << endl;
            age = x;
        }
};

class Child :  public Mother, public Father{
    public:
        int age;
        Child (int x, int y, int z) :  Mother(y), Father(x){
            cout << "setting Childs age" << endl;
            age = z;
        }
};

int main(void){

    Child c(40,37,12);
    cout << c.age << endl << c.Mother::age << endl << c.Father::age << endl;
    return 0;
}