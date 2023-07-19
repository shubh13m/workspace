#include<iostream>
#include<vector>
using namespace std;

vector<int> sumOfArr(vector<int> v1, vector<int> v2){
    vector<int> result;
    int pos1 = v1.size()-1;
    int pos2 = v2.size()-1;
    int sum = 0;
    int carry = 0;
    while(pos1 >=0 && pos2 >=0){
        sum = v1[pos1]+v2[pos2] + carry;
        result.push_back(sum%10);
        carry = sum/10;
        pos1--;
        pos2--;
    }
    result.push_back(carry);
    return result;
}


int main(void){
    vector<int> v1 = {10,8,13,7};
    vector<int> v2 = {10,4,5,6};
    vector<int> result = sumOfArr(v1,v2);
    for(auto x: result){
        cout << x << " ";
    }
    return 0;
}