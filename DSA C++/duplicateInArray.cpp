#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> arr = {1,2,3,5,6,4,5};
    while(arr[0] != arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    cout << arr[0];
    return 0;
}