#include<iostream>
#include<vector>
using namespace std;

int main(void){
    //vector<int> v = {2,1,10,19,12,8};
    vector<int> v = {20,12,10,50,72,80};
    //vector<int> v = {10,15,50,105,110,200};
    //vector<int> v = {2,1,0,19,12,8};
    int diff = v.at(1) - v.at(0);
    int low = v.at(0);
    for(auto x:v){
        if(x-low > diff){
            diff = x-low;
            cout << "diff : " << diff << endl;
        }
        if(x<low){
            low = x;
            cout << "low : " << low << endl;
        }
    }
    cout << diff;
}