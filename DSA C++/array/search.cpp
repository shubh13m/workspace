#include<iostream>
#include<vector>

using namespace std;

int search(vector<int> v, int n){
    for(int i=0;i<v.size();i++){
        if(v.at(i)==n){
            return i;
        }
    }
    return -1;
}

int main(void){
    int n = 1;
    vector<int> v = {9,8,7,6,5,4,1};
    int pos = search(v,n);
    if(pos == -1){
        cout << "Not found !!" << endl;
    }
    else cout << pos << endl;
}
