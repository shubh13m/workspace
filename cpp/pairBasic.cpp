#include<iostream>
//#include<utility>

using namespace std;

int main(void){

    pair<int,int> p1(10,20);
    pair<int,int> p2(11,21);

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    return 0;
}