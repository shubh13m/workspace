#include<bits/stdc++.h>

using namespace std;

bool isPrime(int x){
    if (x==0 || x==1) return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){ return false;}
    }
    return true;
}

int main(void){

    for(int i=0;i<20;i++){
        cout << i << " is Prime : " << isPrime(i)<< endl;
    }

    return 0;
}