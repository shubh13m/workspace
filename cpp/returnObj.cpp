#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        int marks;
    public: 
        void getdata(string s, int m){
            name = s;
            marks = m;
        }
};

Student winner(Student x, Student y){
        if(x.marks>y.marks){
            return x;
        }
        else return y;
}

int main(void){

    Student s1,s2;
    s1.getdata("shubham",24);
    s2.getdata("pandey",23);
    
    cout << "Winner is " << winner(s1,s2).name << " with "
    << winner(s1,s2).marks << " marks" << endl;
    return 0;
}