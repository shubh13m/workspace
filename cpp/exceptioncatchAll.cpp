#include<iostream>
using namespace std;

int main(void){
    int x,y;
    float z;
    cin >> x >> y >> z;
    try{
        cout << x << y << endl;
        if(y!=0){
            cout << x/y << endl;
        }
        else{
            throw y;
        }
        if(z!=0){
            cout << x/z << endl;
        }
        else{
            throw z;
        }
        
    }
    catch(int){
        cout << " y is 0" << endl;
    }
    catch(...){
        cout  << "Exception Occured" << endl;
    }
    return 0;
}