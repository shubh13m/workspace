#include<iostream>
using namespace std;

void nto1(int n){
    if(n==0) return ;
    else{
        cout << n << " ";
        nto1(n-1);
    }
}

int main(void){
    nto1(10);
    return 0;
}