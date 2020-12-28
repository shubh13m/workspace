#include<iostream>
using namespace std;

int main(void){
    int m,n;
    cout << "Enter no of rows" << endl;
    cin >> m;
    int** A = new int*[m];
    for(int i=0;i<m;i++){
        cout << "Enter elements of row" << i << endl;
        cin >> n;
        *(A+i) = new int [n]; 
        for(int j=0;j<n;j++){
            cin >> *(*(A + i) + j);
        }
        for(int j=0;j<n;j++){
            cout << *(*(A + i) + j);
        }
        cout << endl;
    }


    return 0;
}