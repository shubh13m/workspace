#include<iostream>
using namespace std;

void trailingZero(int n){
    int count = 0;
    for(int i=5; i<=n; i*=5){
        count += n/i;
    }
    cout << count << endl;
}

int main(void){
    trailingZero(23);
    trailingZero(123);
    trailingZero(1123);
    return 0;
}