#include<iostream>

using namespace std;

int main(void){
    string str = "shubham";
    int len = str.length();
    int arr[26] = {0},i=0;
    char ch;
    while(i<len){
        ch = str.at(i);
        arr[int(ch)-97]++;
        i++;
    }
    for(int j=0;j<26;j++){
        if(arr[j]!=0){
            cout << char(j+97) << " : " << arr[j]<< endl;
        }
    }

    return 0;
}