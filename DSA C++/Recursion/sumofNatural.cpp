#include<iostream>
using namespace std;

int sumofNatural(int n){
    if(n==1) return 1;
    else{
        return n + sumofNatural(n-1);
    }
    
}

int k=0;

int sumofNaturalTail(int n){
    if(n==1) return k+1;
    else{
        k += n;
        return sumofNaturalTail(n-1);
    }
}

int main(void){
    cout << sumofNatural(10) << endl;
    cout << sumofNaturalTail(10);
    return 0;
}