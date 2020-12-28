#include<iostream>

using namespace std;

class Student{
    private:
        int roll;
        int marks;
    public:
        void getdata(int, int);
        void putdata(){
            cout << "Roll: " << roll << endl;
            cout << "Marks: " << marks << endl;
        }
};

void Student :: getdata(int x, int y){
    roll = x;
    marks = y;
}

int main(void){
    cout << "Inside Main"<< endl;
    Student s1,s2;
    s1.getdata(1,25);
    s2.getdata(2,23);
    s2.putdata();
    s1.putdata();
    return 0;
}