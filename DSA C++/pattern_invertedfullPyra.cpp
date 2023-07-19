#include<iostream>
using namespace std;

int main(void){
    int size;
    cin >> size;

    for(int i=0; i<size; i++){
        for(int j=0; j<i+1;j++){
            cout<<" ";
        }
        for(int j=0; j<size-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}