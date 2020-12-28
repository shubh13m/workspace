#include<iostream>
#include<cstring>

using namespace std;

class Student{
    private :
            int marks;
            int cls;
    public :
            string name;

            Student(){
                marks = 0;
                cls = 4;
                name = "X";
            }

            void putdata(){
                cout<<"class: "<<cls<<"\nMarks :"<<marks<<"\nName :"<<name;
            }
};

int main(void){
    Student s; 
    s.putdata();
}