#include<iostream>
#include<vector>
using namespace std;

int main(void){

    vector<int> v = {3,4,1,2,10,8,9};
    vector<int> v1 = {5,6,7};
    for(auto x: v){
        cout << x << ", ";
    }
    for(auto x:v1){
        cout<<x << ", ";
    }
    return 0;
}