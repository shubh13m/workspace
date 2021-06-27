#include<iostream>
using namespace std;

void gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a -= b;
        }
        else{
            b-=a;
        }
    }
    cout << a << endl;
}

void recGcd(int a, int b){
    if(a==0){
        cout << b << endl;
    }
    else return (recGcd(b%a,a));
}

int main(void){
    gcd(16,6);
    gcd(18,15);
    recGcd(6,16);
    recGcd(12,6);
    return 0;
}