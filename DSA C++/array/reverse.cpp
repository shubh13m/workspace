#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> v = {7,6,1,2,3,5,8,9};
    int l=0, r=v.size()-1,temp;
    while(l<r){
        temp = v.at(l);
        v.at(l) = v.at(r);
        v.at(r) = temp;
        l++;
        r--;
    }
    for(auto x:v){
        cout << x << " ";
    }
    return 0;
}