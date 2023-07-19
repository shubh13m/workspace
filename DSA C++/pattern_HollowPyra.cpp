#include<iostream>
using namespace std;

int main(void){
    int size;
    cin >> size;

    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1;j++){
            cout<<" ";
        }
        if(i==0 || i==size-1){
            for(int j=0; j<i+1; j++){
                cout << "* ";
            }
        }
        else{
            for(int j=0; j<i+1; j++){
                if(j==0 || j==i){
                    cout << "* ";
                }
                else cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}