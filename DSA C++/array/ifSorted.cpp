#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int i;
    vector<int> v = {21,20,22,25,50,50};
    for(i=1;i<v.size();i++){
        if(v.at(i-1)<=v.at(i)){
            continue;
        }
        else{
            break;
        }
    }
    if(i==v.size()) cout << "Sorted" ; 
    else cout << "Not Sorted";
    return 0;
}