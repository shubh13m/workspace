#include<iostream>
using namespace std;

int main(void){
    int a = 3, b=6;
    cout << (a & b) << endl; //2
    cout << (a | b) << endl; //8
    cout << (~a) << endl; //-4
    cout << (a ^ b) << endl; //5
    cout << (a<<2) << endl; //12
    cout << (b>>2) << endl;  //1

}
