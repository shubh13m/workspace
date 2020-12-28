#include<iostream>
using namespace std;

string FLAG = "unused";

void divide(int x, int y){
    try{
        if(x!=0 && y!=0){
        FLAG = "used";
        cout << "Legit values, result is " << x/y << endl;
        }
        else if(x==0){
            throw x;
        }
        else {
            throw y;
        }
    }
    catch(int z){
        cout<< "Inside catch" << endl;
        FLAG = "unused";
        throw z;
    }
}

int main(void){
    int x,y;
    cin >> x >> y;
    try{
        divide(x,y);
    }
    catch(int z){
    cout << "Inside main catch" << endl;
    cout << z << endl;
    }

    cout << FLAG;

    return 0;
}