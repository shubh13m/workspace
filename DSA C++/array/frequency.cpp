#include<iostream>
#include<vector>

using namespace std;

int main(void){
    //vector<int> v = {10,20,20,20,30,40,40,50,60};
    //vector<int> v = {20,20,20,20,30,40,40,40,60};
    vector<int> v = {10,20,22,23,30,40,44,60,60};
    int count = 0;
    int last = v.front();
    for(auto x:v){
        if(x==last){
            count++;
        }
        else{
            cout << last << " : " << count << endl;
            count = 1;
            last = x;
        }
    }
    cout << last << " : " << count;
    return 0;
}