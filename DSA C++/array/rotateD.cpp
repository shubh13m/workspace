#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> v = {1,2,3,4,5,7,6,8,10};
    int d = 3;
    vector<int> vd;
    cout << "Old : ";
    for(auto x:v) {
        cout << x << " ";
    }
    for(int i=0;i<d;i++){
        vd.push_back(v.at(i));
    }
    for(int i=d;i<v.size();i++){
        v.at(i-d) = v.at(i);
    }
    for(int i=0;i<d;i++){
        v.at(v.size()-d+i) = vd.at(i);
    }
    cout << endl << "New : ";
    for(auto x:v) {
        cout << x << " ";
    }
    return 0;
}