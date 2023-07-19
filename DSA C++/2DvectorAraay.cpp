#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<vector<int>> arr;
    vector<int> a = {1,2,3};
    vector<int> b = {5,6,7};
    vector<int> c = {8,9,10,11};
    arr.push_back(c);
    arr.push_back(b);
    arr.push_back(a);

    for(auto x:arr){
        for(auto y: x){
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}