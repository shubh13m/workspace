#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

void getVal(list<int> &l){
    cout << "--- start ---" << endl;
    for(auto it=l.begin();it != l.end();it++){
        cout << *it << endl;
    }
    cout << "--- end ---" << endl;
}

int main(void){

    list<int> l {10,20,30};
    getVal(l);
    l.push_front(5);
    l.push_front(0);
    l.push_back(40);
    l.push_back(50);
    getVal(l);
    l.pop_front();
    l.pop_back();
    getVal(l);
    l.reverse();
    getVal(l);
    cout << l.front() << " " << l.back() << endl;
    auto it = find(l.begin(),l.end(),10);
    l.insert(it,{10,10,20,30,10});
    getVal(l);
    l.erase(it);
    getVal(l);
    l.unique();
    getVal(l);
    return 0;
}