#include<iostream>
using namespace std;

int searchElement(int array[], int size, int key){
    for(int index=0; index<size; index++){
        if(array[index]==key){
            return index;
        }
    }
    return -1;
}

int main(void){

    int array[5];
    int key;
    
    cout << "enter 5 elements of array"<< endl;
    for(int index=0; index<5; index++){
        cin >> array[index];
    }
    cout << "enter element you wish to find" <<endl;
    cin >> key;
    
    int position = searchElement(array, 5, key);
    if(position<0){
        cout << key << " is not present.";
    }
    else cout << key <<" is present at " << position;

    return 0;
}