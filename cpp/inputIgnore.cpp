#include<iostream>

using namespace std;

int main(void){

    int a;
    string b,c;

    cin>>a;
    cin.ignore();
    getline(cin,b);
    cout << a << b;

    return 0;
}