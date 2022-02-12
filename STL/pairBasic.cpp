#include<iostream>
#include<utility>

using namespace std;

int main(void){
    pair<int,string> p1;
    p1.first = 13;
    p1.second = "shubham";
    cout << p1.second << " " << p1.first << endl;
    pair<int,string> p2 = make_pair(3,"pandey");
    cout << p2.second << " " << p2.first ;
    return 0;
}