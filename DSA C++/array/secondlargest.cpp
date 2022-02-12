#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> v ={39,1,9,10,15,7,6,40};
    //vector<int> v ={4,4,4,4,4,4,4,4,4,4};
    int lar = v.at(0), slar = -1; 
    for(auto x:v){
        if(x>lar){
            slar = lar;
            lar = x;
        }
        if(x<lar){
            if(x>slar){
                slar = x;
            }
        }
    }
    cout << lar << " " << slar;
    return 0;
}