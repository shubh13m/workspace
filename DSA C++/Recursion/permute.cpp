#include<iostream>
using namespace std;

void permute(string str, int i){
    if(i==str.length()-1){
        cout << str << endl;
        return;
    }
    for(int j=i;j<str.length();j++){
        swap(str[j],str[i]);
        permute(str,i+1);
        swap(str[j],str[i]);
    }

}

int main(void){
    permute("ABC",0);
    return 0;
}