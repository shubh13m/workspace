#include<iostream>
using namespace std;

void factorial(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact *=  i;
    }
    cout << fact << endl;
}

long long recFactorial(int n){
    if(n == 1){
        return 1;
    }
    return n * recFactorial(n-1);
}

int main(void){
    factorial(23);
    factorial(23);
    cout <<  recFactorial(6) << " ,  " << recFactorial(42);
    return 0;
}