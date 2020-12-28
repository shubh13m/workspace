#include <bits/stdc++.h>

using namespace std;

int main(void){

    vector<int> v = {1,2,3};
    v.push_back(4);
    v.push_back(5);
    for(auto &x:v){
        cout << x << " ";
    }
    cout <<  endl;
    for(auto it = v.rbegin();it != v.rend(); it++){
        cout << *it << " ";
    }
    cout << "Size" << v.size() << endl;
    cout << "Capacity" << v.capacity() << endl;
    cout << "Empty" << v.empty()<< endl;
    v.resize(2);
    v.resize(4);
    v.resize(6,10); //size,value
    for(auto &x:v){
        cout << x << " ";
    }
    cout << endl;
    v.front();
    v.back();
    cout << "**" << endl;
    for(int i; i<v.size();i++){
       cout << v.at(i) << " " << v[i] << endl;
    }
    cout << "**" << endl;
    vector<int> v1 (v.begin(),v.end());
    for (auto &x:v1){
        cout << x << " ";
    }
    cout << endl;
    v.assign(6,0);
    for(auto &x:v){
        cout << x << " ";
    }
    cout << endl;
    v.assign(v1.begin(),v1.end());
        for(auto &x:v){
        cout << x << " ";
    }
    cout << endl;
    v.insert(v.begin(),10);
    v.insert(v.begin(),2,20);
    v.insert(v.begin(),v1.begin(),v1.end());
    v.erase(v.begin()+1);
    v.erase(v.begin(),v.end()-2);
    v.pop_back();
    v.clear();
    return 0;
}