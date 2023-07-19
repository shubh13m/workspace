#include<iostream>
using namespace std;

int main(void){
    int size;
    cin >> size;
    for(int i=0; i<size; i++){
        if(i==0 || i== size-1){
            for(int j=0; j<size-i; j++){
                cout << "* ";
            }
        }
        else{
            for(int j=0; j<size-i; j++){
                if(j==0 || j==size-i-1){
                    cout<<"* ";
                }
                else cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}