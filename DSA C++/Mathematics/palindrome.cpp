#include<iostream>
using namespace std;

void checkPalindrome(int n){
    int rev = 0;
    int num = n;
    while(n){
        rev = 10*rev + n%10;
        n /= 10;
    }
    if(rev == num){
        cout<<"Yes";
    }
    else cout << "No";
}

int main(void){
    checkPalindrome(100);
    checkPalindrome(1221);
    return 0;
}