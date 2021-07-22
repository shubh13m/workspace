#include<iostream>
using namespace std;

void tower(int n, string sr, string des, string aux){
    if(n==1){
        cout << "Move " << n << " from " << sr << " to " << des << endl;
        return ;
    }
    tower(n-1,sr,aux,des);
    cout << "Move " << n << " from " << sr << " to " << des << endl;
    tower(n-1,aux,des,sr);
}

int main(void){
    tower(3,"A","C","B");
    return 0;
}