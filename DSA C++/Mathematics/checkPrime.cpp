#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n==1){
        return true;
    }
    else{
        for(int i=2;i<n;i++){          // inefficient brute force
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
}

bool checkPrimeEff(int n){
    if(n==1){
        return false;
    }
    else{
        for(int i=2;i*i<=n;i++){         // slightly efficient uses any number is in pair of multiples.
            if(n%i == 0){           // must lie before root of n.
                return false;
            }
        }
        return true;
    }
}

bool checkPrimeBest(int n){
    if(n==2 || n==3) return true;
    if(n==1 || n%2==0 || n%3==0) return false;
    else{
        for(int i=5;i*i<=n;i+=6){
            if(n%i==0 || n%(i+2)==0){
                return false;
            }
        }
        return true;
    }
}

int main1(void){
    if(checkPrime(23)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    if(checkPrimeEff(3)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    if(checkPrimeBest(16)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}