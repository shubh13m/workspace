#include<iostream>
#include<cmath>

using namespace std;

void powerSet(string s){
    int strlen = s.length();
    int num = pow(2,strlen);
    for(int i=0;i<num;i++){
        for(int j=0;j<strlen;j++){
            if(i&(1<<j)) cout<< s[j];
        }
        cout<< endl;
    }
    
}

int main(void){
    powerSet("abc");
    return 0;
}