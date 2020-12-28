#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> vv;

void create(){
    int n;
    cin >> n;
    while(n--){
        vector<int> v;
        int x;
        cin >>x;
        while(x--){
            int m;
            cin >> m;
            v.push_back(m);
        }
        vv.push_back(v);
    }
}

void print(){
    for(auto &x:vv){
        for(auto &y:x){
            cout << y << " ";
        }
        cout << endl;
    }    
}

int calculate(){
    
    int max_size = 0;
    for(auto &x:vv){
        if (max_size < x.size()){
            max_size = x.size();
        }
    }
    int sum,min_sum = 1000000;
    for(int i=0; i<max_size;i++){
        for(int j=0;j<vv.size();j++){
            if(i>vv[j].size()) continue;
            else {
                sum += vv[j][i];
            }
        }
        if(sum<min_sum)
            min_sum = sum;
    }
    return min_sum;
}


int main(void){
    int t;
    cin >> t;
    while(t--){

        create();
        print();        
        cout << calculate();


    }

    return 0;
}