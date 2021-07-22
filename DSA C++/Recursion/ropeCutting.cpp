#include<iostream>
using namespace std;
int count = 0;
int ropeCut(int n, int a, int b, int c){
    if(n<0){
        return -1;
    }
    if(n==0) return 0;
        
    int result = max(ropeCut(n-a,a,b,c),ropeCut(n-b,a,b,c),ropeCut(n-c,a,b,c));
    if (result == -1){
        return -1;
    }
    return result+1;
}

int main(void){
    cout << ropeCut(23,12,9,11);
    return 0;
}