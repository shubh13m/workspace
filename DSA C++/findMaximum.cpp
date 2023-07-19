#include<iostream>
using namespace std;

int findMax(int array[], int size){
    int max = INT_MIN;
    for(int index=0; index<size; index++){
        if(array[index]>max){
            max = array[index];
        }
    }
    return max;
}

int main(void){

    int array[5];

    cout << "enter 5 elements of array"<< endl;
    for(int index=0; index<5; index++){
        cin >> array[index];
    }

    cout << "Max is " << findMax(array, 5);

    return 0;
}