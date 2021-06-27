#include<iostream>
#include<vector>

using namespace std;

int main(void){

    vector<int> v = {2,2,12,4,4,10,6,6,9,9}; // 3 and 4 occurs only once
    int result1 = 0, result2 = 0, xr = 0;
    for(auto x:v){
        xr ^= x;
    }
    int mask = xr & (xr-1);
    for(auto x:v){
        if(x & mask) result1 ^= x;
        else result2 ^= x;
    }
    cout << result1 << ", " << result2;
    return 0;
}