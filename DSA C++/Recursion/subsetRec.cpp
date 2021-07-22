#include<iostream>
using namespace std;

void subsetRec(string str, string curr, int i){
    if(i==str.length()){
        cout<< curr <<  endl;
        return ;
    }
    subsetRec(str,curr,i+1);
    subsetRec(str,curr+str[i],i+1);
}

int main(void){
    subsetRec("ABC", "", 0);
    return 0;
}