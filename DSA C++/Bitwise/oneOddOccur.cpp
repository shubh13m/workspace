#include<iostream>
#include<vector>
using namespace std;

int main(void){

    vector<int> v = {2,2,3,3,4,4,4,6,6,9,9}; // 3 occurs only once
    int result = 0;
    for(auto x:v){
        result ^= x;
    }
    cout << result;
    return 0;
}