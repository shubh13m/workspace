#include<iostream>
#include "checkPrime.cpp"
using namespace std;

void allPrime(int n){
    for(int i=2;i<=n;i++){
        if(checkPrimeBest(i)){
            cout << i << " ";
        }
    }

    cout <<  endl;
}

void sieve(int n){
    bool isPrime[n+1];
    for(int i=0;i<=n;i++){
        isPrime[i] = true;
    }

    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=2*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout << i << " ";
        }
    }
}

int main(void){
    allPrime(20);
    sieve(20);
    return 0;
}