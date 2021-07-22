#include<iostream>
using namespace std;

void f1ton(int n){
    if(n==0) return;
    else{
        f1ton(n-1);
        cout << n <<" ";
    }
}

int main(void){
    f1ton(10);
    return 0;
}