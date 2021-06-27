#include<iostream>
using namespace std;

int main(void){
    int a = 33;
    if(a&(a-1)) cout << "no";
    else cout << "yes";
    return 0;
}