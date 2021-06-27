#include<iostream>
using namespace std;

int main(void){

    int num = 13, n = 3;
    int x = 1 << n-1;
    if (num & x){
        cout << "yes";
    }
    else cout << "no";
    return 0;
}