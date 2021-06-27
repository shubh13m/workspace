#include<iostream>
using namespace std;

void countDigit(int n){
    int count = 0;
    while(n!=0){
        n/=10;
        count++;
    }
    cout << count;
}

int main(void){
    countDigit(1234567890);
    return 0;
}
