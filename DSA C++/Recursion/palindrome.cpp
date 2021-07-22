#include<iostream>

using namespace std;

bool palindrome(string str, int l, int r){
    if (l==r) return true;
    if (str[l]!=str[r]) return false;
    if (l<r) return palindrome(str,l+1,r-1);
}

int main(void){
    string str = "aaaa";
    cout << palindrome(str, 0, str.length()-1);
    return 0;
}