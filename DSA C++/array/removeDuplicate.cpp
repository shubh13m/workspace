#include<iostream>
#include<vector>

using namespace std;

int main(void){
    //sorted array.
    //vector<int> v = {10,10,20,20,30,40,45,45,50,50};
    //vector<int> v = {10,10,10,10,10,10};
    // vector<int> v = {10,10,10,10,10,100};
    // vector<int> v = {101,10,10,10,10,10};
    // vector<int> v = {10,10,20,20,30,40,45,45,20,50};
    vector<int> v = {10,11,20,25,30,40,45,48,50,60};
    
    int last = 0;
    for(int i=1;i<v.size();i++){
        if(v.at(i)!=v.at(last)){
            last++;
            v.at(last) = v.at(i);
        }
    }
    for(int i=0;i<=last;i++){
        cout << v.at(i) << " ";
    }

    return 0;
}