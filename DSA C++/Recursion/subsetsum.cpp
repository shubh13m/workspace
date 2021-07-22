#include<iostream>
using namespace std;

int subsetsum(int arr[],int len, int s){
    if(len==0){
        if(s==0) return 1;
        else return 0;
    }
    else{
        return subsetsum(arr,len-1,s) + subsetsum(arr,len-1,s-arr[len-1]);
    }
    
}

int main(void){
    int arr[] = {10,15,20,5}; 
    cout << subsetsum(arr,5,25);
    return 0;
}