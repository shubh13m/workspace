#include<iostream>
using namespace std;

int main(void){
    int size;
    cin >> size;
    for(int row=0; row<size; row++){
        //space
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        //star
        for(int col=0; col<size-row; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}