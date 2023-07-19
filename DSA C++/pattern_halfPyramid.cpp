#include<iostream>
using namespace std;

int main(void){
    int size;
    cin >> size;
    for(int i=0; i<size; i++){
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        for(int k=0; k<size-1-i; k++){
            cout<< "  ";
        }
        cout<<endl;
    }
    return 0;
}