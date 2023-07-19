#include<iostream>
using namespace std;

int main(void){

    int y;
    float x,z;
    cin>>x>>y>>z;
    try{
        if((y!=0) && (z!=0)){
            cout<<x/y<<endl;
        }
        else if(y==0){
            throw y;
        }
        else {
            throw z;
        }
    }
    catch(int a){
        cout<<"y is " << a<<endl;
    }
    catch(float a){
        cout<<"z is " << a<<endl;
    }

    int arr[3] = {1,3,6};
    int pos;
    try{
        cin>>pos;
        if(pos>(sizeof(arr)/sizeof(int))){
            throw(pos);
        }
        else{
            cout << arr[pos] << endl;
        }
    }

    catch(int x){
        cout<<"Index out of bound " <<pos <<endl;
    }

    return 0;
}