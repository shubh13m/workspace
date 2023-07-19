#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> v = {0,0,1,0,1,0,0,1,1,1,0,0,1,0,1,1,1,0,1,1,1};
    //vector<int> v = {1,1,1,0,0,0};
    //vector<int> v = {0,0,0,1,1,1,1};
    int start = 0;
    int end = v.size()-1;
    int temp;
    while(start<end){
        if(v[start]==1){
            temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            end--;
        }
        else start++;
    }
    for(auto x:v) cout << x << " ";
    return 0;
}