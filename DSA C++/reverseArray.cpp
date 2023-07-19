#include<iostream>
using namespace std;

void printExtreme(int array[], int size){
    cout << "enter" << size << " elements of array"<< endl;
    for(int index=0; index<size; index++){
        cin >> array[index];
    }

    int left = 0;
    int right = size-1;
    int temp;
    for(int index = 0; index<size; index++){
        if(left>=right) {cout << array[left]; break;}
        temp = array[left];
        array[left] = array[right];
        array[right] = temp;
        left++;
        right--;
    }
    cout << "Modified array is : ";
    for(int index=0; index<size; index++){
        cout << array[index];
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
