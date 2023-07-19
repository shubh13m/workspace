#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> arr = {-1,-2,2,4,5,6,7,-9,10,-3,0,1};
    int front = 0;
    int end = arr.size()-1;
    
    while (front<end)
    {
        if(arr[front]>0){
            front++;
        }
        if(arr[end]<0){
            end--;
        }
        else{ swap(arr[front],arr[end]);}
    }
    
    for(auto x:arr){
        cout << x << " ";
    }
    return 0;
}