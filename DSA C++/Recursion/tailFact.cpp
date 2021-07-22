#include<iostream>
using namespace std;

int k = 1;

int tailFact(int n){
    if(n==0) return k;
    else{
        k *= n;
        return tailFact(n-1);
    }
}

int main(void){
    cout << tailFact(5);
    return 0;
}