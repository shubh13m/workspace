#include<iostream>
using namespace std;

void divide(int i, int j){
    if(j==0){
        throw j;
    }
    else cout << i/j << endl;
}

int main(void){
    int x,y;
    cin >>x>>y;
    try{
    divide(x,y);
    }
    catch(int a){
        cout << "Problem in " << a << endl;
    }


    return 0;
}