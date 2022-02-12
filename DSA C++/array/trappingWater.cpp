#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> v = {2,5,2,4,7,1,10,2,9,1};
    //vector<int> v = {5,0,6,2,3};
    vector<int> lm;
    vector<int> rm;
    lm.push_back(v.front());
    rm.push_back(v.back());
    for(int i=1;i<v.size();i++){
        if(v.at(i)>lm.at(i-1)){
            lm.push_back(v.at(i));
        }
        else lm.push_back(lm.at(i-1));
    }
    for(int i=v.size()-2;i>=0;i--){
        if(v.at(i)>rm.at(v.size()-2-i)){
            rm.push_back(v.at(i));
        }
        else rm.push_back(rm.at(v.size()-2-i));
    }
    for(auto x:v) cout << x << " ";
    cout << endl;
    for(auto x:lm) cout << x << " ";
    cout << endl;
    for(auto x:rm) cout << x << " ";
    cout << endl;
    int res =0;
    for(int i=1;i<v.size()-1;i++){
        if(lm.at(i)>rm.at(rm.size()-i-1)){
            res += rm.at(rm.size()-i-1) - v.at(i);
            cout << res << " " << i << endl;
        }
        else{
            res += lm.at(i) - v.at(i);
            cout << res << " " << i << endl;
        }
    }

    cout << res ;
}