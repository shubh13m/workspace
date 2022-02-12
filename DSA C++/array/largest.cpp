#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> v = {6,7,4,9,10,2,3};
    int largest = v.at(0);
    for(auto x:v){
        if(x>largest){
            largest = x;
        }
    }
    cout << largest;
    return 0;
}