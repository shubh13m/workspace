#include<iostream>
using namespace std;

int countbit(int n){
    int count = 0;
    while(n){
        if(n&1) count++;
        n>>=1;
    }
    return count;
}

int countbitEff(int n){
    int count = 0;
    while(n){
        n &= (n-1);
        count++;
    }
    return count;
}

int main(void){

    cout << countbit(0b11011001);
    cout << countbitEff(0b11100001);
    return 0;
}