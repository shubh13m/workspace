#include<iostream>
using namespace std;

void printExtreme(int array[], int size){
    cout << "enter" << size << " elements of array"<< endl;
    for(int index=0; index<size; index++){
        cin >> array[index];
    }

    int left = 0;
    int right = size-1;
    for(int index = 0; index<size; index++){
        if(left>=right) {cout << array[left]; break;}
        cout << array[left] << " " << array[right] << " ";
        left++;
        right--;
    }
}

int main(void){
    int array[8];
    int array1[7];

    printExtreme(array,8); 
    cout << endl;
    printExtreme(array1,7);

    return 0;
}
