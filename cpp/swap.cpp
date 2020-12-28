#include<iostream>

using namespace std;

void swapv(int x, int y){
    cout << "Inside swapv\n";
    int z;
    z = y;
    y = x;
    x = z;
    cout<<"exiting swapv\n";
}

void swapr(int &x, int &y){
    cout << "Inside swapr\n";
    int z;
    z = y;
    y = x;
    x = z;
    cout<<"exiting swapr\n";
}

void swapp(int *x, int *y){
    cout << "Inside swapp\n";
    int *z;
    *z = *y;
    *y = *x;
    *x = *z;
    cout<<"exiting swapp\n";
}

int main(void){

    int x,y;
    cout<<"Enter two number\n";
    cin>>x>>y;
    cout<<"Call by value\n";
    swapv(x,y);
    cout<<"x : "<<x<<endl<<"y : "<<y<<endl;
    cout<<"Call by reference\n";
    swapr(x,y);
    cout<<"x : "<<x<<endl<<"y : "<<y<<endl;
    cout<<"pointer swap\n";
    swapp(&x,&y);
    cout<<"x : "<<x<<endl<<"y : "<<y<<endl;
    return 0;
}