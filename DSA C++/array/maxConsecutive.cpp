#include<iostream>
#include<vector>

using namespace std;

int main(void){

    vector<int> v = {1,0,1,1,0,0,0,1,0,1,1,1,0,1,1,1};
    int max = 0, curr = 0;
    for(auto x:v){
        if(x==1){
            curr++;
            if(curr>max){
                max = curr;
            }
        }
        else curr = 0;
    }

    cout  << max;

    return 0;
}