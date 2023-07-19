#include<iostream>

using namespace std;

class Count{
    private:
        static int count;
        int id; 
    public:
        void getdata(int x){
            id = x;
        }
        static void increment();
        void putdata(){
            cout << "putdata" <<endl;
            cout<<"Id : "<<id<<endl;
            cout<<"Count : "<<count<<endl;
        }
        void increase(){
            count++;
            cout<<"Increase"<<endl;
            putdata();
        }
};

void Count :: increment(){
    cout << "increment" <<endl;
    count++;
}

int Count :: count;

int main(void){

    Count p1,p2;
    p1.getdata(1);
    p2.getdata(2);
    p1.increase();
    Count :: increment();
    p2.increase();
    Count :: increment();
    p1.putdata();
    p2.putdata();
    return 0;
}