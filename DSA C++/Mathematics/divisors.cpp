#include<iostream>
using namespace std;

void divisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
    cout << endl;
}

void divisorsEff(int n){
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
    for(;i>=1;i--){
        if(n%i==0){
            cout << n/i << " ";
        }
    }
    cout << endl;
}

int main(void){

    divisors(48);
    divisors(25);
    divisorsEff(48);
    divisorsEff(49);
    return 0;
}
