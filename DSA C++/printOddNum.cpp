#include<iostream>
using namespace std;
int main(void){
    int number;
    cin >> number;
    for(int i=1; i<=number; i++){
        if(i%2){
            cout<< i << " ";
        }
    }
    return 0;
}