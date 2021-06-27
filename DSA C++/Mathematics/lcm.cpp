// lcm * gcd = a*b

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    else{
        return gcd(b%a,a);
    }
}

void lcm(int a, int b){
    cout << (a*b)/(gcd(a,b)) << endl;;
}

int main(void){
    lcm(4,9);
    lcm(2,5);
    lcm(3,15);
    return 0;
}