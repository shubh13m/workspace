#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

int main(void){
    int arr[] = {8,5,6,7,3,1,2};
    char arr2[] = {'S','H','U','B','H','A','M'};
    pair<char,int> arr3[7];
    for(int i=0;i<7;i++){
        arr3[i].first = arr2[i];
        arr3[i].second = arr[i];
    }
    sort(arr3,arr3+7);
    for(int i=0;i<7;i++){
        cout<<arr3[i].first << "+"<< arr3[i].second << endl;
    }
    return 0;
}