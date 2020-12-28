#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void){

    vector<pair<int,char>> v;
    pair<int,char> p;
    cout << "Enter no of pairs" << endl;
    int n,x;
    char ch;
    cin >> n;
    cout << "Enter pairs" << endl;
    for(int i=0;i<n;i++){
        cin >> x >> ch;
        p.first = x;
        p.second = ch;
        v.push_back(p);
    }

    sort(v.begin(),v.end());

    for(auto x:v){
        cout << x.first << " " << x.second << endl;
    } 

    return 0;
}