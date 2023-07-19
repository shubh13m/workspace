#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> v){
    for(int index=0; index<v.size(); index++){
        cout << v[index] << ", ";
    }
    cout<< endl;
}

int main(void){

    vector<int> v;
    int item;
    for(int index=0; index<5; index++){
        cin >> item;
        v.push_back(item);
    }

    vector<int> v1 (10,20);
    vector<int> v2 (10,1);
    vector<int> v3 {10,20,30};

    printVector(v);
    printVector(v1);
    printVector(v2);
    printVector(v3);
    return 0;
}