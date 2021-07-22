#include<iostream>
using namespace std;

void DtoBin(int n){
    if(n==1) cout << 1;
    else{
        DtoBin(n/2);
        cout << n%2;
    }
}

int main(void){
    DtoBin(126);
    return 0;
}