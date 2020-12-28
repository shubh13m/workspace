#include<iostream>
#include<cstring>
using namespace std;

class Student{
    private: 
            int cls;
            string name;
            int marks;
    public:
            Student(int arg1, string arg2, int arg3){
                cls = arg1;
                name = arg2;
                marks = arg3;
            }

            void putdata(){
                cout << "Class : " <<cls<<"\nName :" <<name << "\nMarks :"<<marks;
            }
};

int main(void){
    Student s1(10,"shubham",24), s2(12,"pandey",25);
    s1.putdata();
    s2.putdata();
    return 0;
}