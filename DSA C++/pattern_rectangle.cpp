#include<iostream>
using namespace std;
int main(void){

    int row,col;
    cin >> row >> col;
    cout << "Making rectangle of " << row << " by " << col << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}