#include<iostream>
#include<vector>

using namespace std;

int main(void){

    vector<int> v {3,2,1};
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    for(auto &x:v)
        cout << x << " ";
    cout << "\n";
    for(auto it = v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << "\n";
    for(auto it = v.rbegin();it!=v.rend();it++){
        cout << *it << " ";
    }
    cout << "\n";
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.resize(4);
    cout << v.size() << " " << v.capacity() << endl;
    v.shrink_to_fit();
    cout << v.size() << " " << v.capacity() << endl;
    v.resize(6);
    cout << v.size() << " " << v.capacity() << endl;
    v.resize(10,10);
    cout << v.size() << " " << v.capacity() << endl;
    cout << v.front() << " " << v.back() << endl;
    for(int i=0;i<v.size();i++)
        cout << v[i] << " " << v.at(i) << endl;
    cout << "new vector \n";
    vector<int> v2 (v.begin(),v.end());
    for(auto &x:v2)
        cout << x << " ";
    cout << "\n";

    v2.assign(10,1);
    for(auto &x:v2)
        cout << x << " ";
    cout << "\n";

    v2.pop_back();
    while(!(v2.empty()))
        v2.pop_back();
    
    cout << v2.size() << endl;

    v2.insert(v2.end(),1);
    v2.insert(v2.end(),5,2);
    v2.insert(v2.end(),v.begin(),v.end());
    for(auto &x:v2)
        cout << x << " ";
    cout << "\n";

    v2.clear();

    v.erase(v.begin()+3);
    for(auto &x:v)
        cout << x << " ";
    cout << "\n";
    
    v.erase(v.begin(),v.end());
    for(auto &x:v)
        cout << x << " ";
    cout << "\n";

    return 0;
}
