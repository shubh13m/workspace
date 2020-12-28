#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> v{0,11,12,13};
    v.push_back(14);

    for(auto x:v){
        cout << x <<" ";
    }
    cout << endl;

    vector<int> :: iterator it = v.begin(); 

    for(int i= 0;i<v.size();i++){
        cout << *(it + i) <<" ";
    }

    it = v.begin();
    cout << *it << endl;

    it = next(it);
    cout << *it << endl;

    it = next(it,3);
    cout << *it << endl;

    it = prev(it);
    cout << *it << endl;

    it = prev(it,2);
    cout << *it << endl;

    advance(it,3);

    cout << *it << endl;
    return 0;
}