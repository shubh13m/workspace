#include<iostream>
using namespace std;

class Data{
    public:
        int arr[10];
        void setdata(void){
            for(int i=0;i<10;i++){
                arr[i] = i;
            }
        }
        void show(){
            for(int i=0;i<10;i++){
                cout << arr[i];
            }
        }
};

// void show(int x){
//     cout << x ;
// }

int main(void){

    Data d;
    d.setdata();
    d.show();
    Data *ptr = &d;
    for(int i=0;i<10;i++){
        *(ptr->arr + i) = 1;
    }
    ptr->show();


    // int b[10],*ptr[10];
    // for(int i=0;i<10;i++){
    //     b[i] = i;
    //     ptr[i] = b + i;
    // }

    // string name = "shubham";

    // string *nm = &name; 

    // for(int i=0;i<10;i++){
    //     //cout << i << " : " << ptr[i] << endl;
    //     //cout << i << " : " << *(ptr + i) << endl;
    //     //cout << b[8] - b[2] << endl;
    //     //cout << *(ptr + 2)<< endl;
    //     //cout << *(ptr[9-i]) << endl; 
    //     //cout << nm[1]  << endl;
    // }
    // void (*ptr2)(int);
    // ptr2 = &show;

    // ptr2(1024);

    return 0;
}