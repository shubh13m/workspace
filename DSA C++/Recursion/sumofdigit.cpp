#include<iostream>
using namespace std;

int sumofdigit(int n){
    if(n==0) return 0;
    else{
        return n%10 + sumofdigit(n/10);
    }
}

int main(void){
    cout << sumofdigit(1234);
    return 0;
}