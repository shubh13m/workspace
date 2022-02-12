#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> v = {0,1,12,0,40,6,0,8,0,7,6,0,0,1};
    int count = 0,temp;
    for(int i=0;i<v.size();i++){
        if(v.at(i)!=0){
            temp = v.at(i);
            v.at(i) = v.at(count);
            v.at(count) = temp;
            count++;
        }
    }  
    for(auto x:v){
        cout << x << " ";
    }
    return 0;
}