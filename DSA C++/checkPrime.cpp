#include<iostream>
using namespace std;

int main(void){
    int number;
    cin >> number;
    if( number==1 ){ cout << "Not Prime";}
    else if( number==2 ){ cout << "Prime";}
    else if( number==3 ){ cout << "Prime";}
    else if( number%2 == 0){cout << "Not Prime";}
    else if( number%3 == 0){cout << "Not Prime";}
    else{
        for(int i=5; i<number; i++){
            if(number%i ==0) {
                cout << "Not Prime";
                exit;
            }
        }
        cout << "Prime";
    }
    return 0;
}