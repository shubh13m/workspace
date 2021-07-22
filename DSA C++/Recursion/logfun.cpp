#include<iostream>
using namespace std;

int logfun(int n){
    if(n==1) return 0;
    else{
        return 1+ logfun(n/2);
    }
}

int main(void){
    cout << logfun(30);
    return 0;
}