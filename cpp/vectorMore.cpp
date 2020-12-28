#include<iostream>
#include<vector>
#include<utility>

using namespace std;

void setVal(vector<pair<int,string>> &vp){
    int n,x;
    string str;
    cin >> n;
    while(n--){
        cin >> x >> str;
        vp.push_back(make_pair(x,str));
    }
}

void getVal(const vector<pair<int,string>> &vp){
    for(auto &x:vp){
        cout << x.first << " " << x.second <<endl;
    }
}

int main(void){
    vector<pair<int,string>> vp;
    setVal(vp);
    getVal(vp);
    vp.insert(vp.end(),make_pair(0,"X"));
    vp.insert(vp.begin()+1,3,make_pair(0,"X"));
    getVal(vp);
    vp.clear();
    getVal(vp);

    return 0;
}