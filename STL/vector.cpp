#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> v = {1,2,10,20};
    vector<string> v1 = {"shubham", "pandey"};
    vector<int> v2(5,5);
    for(auto &x:v){
        x*=10;
    }
    for(auto x:v) {cout << x<< endl;}
    for(string x:v1) {cout<<x<<endl;}
    for(int x:v2) {cout<<x<<endl;}
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout << *it << endl;
    }

    vector<int> :: reverse_iterator itr;
    for(itr=v.rbegin();itr!=v.rend();itr++){
        cout << *it << endl;
    }
    cout << "Size : " << v.size() << endl;
    cout << "Front : " << v.front() << ", Back : " << v.back() << endl;
    v.pop_back();
    v.push_back(201);
    v.swap(v2);
    cout << "Front : " << v.front() << ", Back : " << v.back() << endl;
    vector<int> v3;
    v3.assign(10,-1);
    for(auto x:v3) {cout << x<< endl;}
    v3.assign({1,2,3});
    for(auto x:v3) {cout << x<< endl;}
    v3.assign(v.begin(),v.begin()+3);
    for(auto x:v3) {cout << x<< endl;}
    
    return 0;
}