#include<iostream>

using namespace std;

class employee{
    private: 
        int empId;
        string ename;
        float salary;
        void updateSalary(){
            cout << "enter salary : " << endl;
            cin >> salary;
        }
    public:
        void getdata(int,string,float);
        void putdata(){
            cout<<"Id : "<< empId<< endl
            << "Name : " << ename<< endl
            << "Salary : " << salary << endl;
            getsalary();
        }
        void getsalary(){
            cout <<"Present salary : "<< salary << endl;
            cout << "Press U to update" << endl;
            string temp;
            cin >> temp;
            if(temp == "U"){
                updateSalary();
                putdata();
            }
         }
};

void employee :: getdata(int x, string s, float sal){
    empId  = x;
    ename = s;
    salary = sal;
    cout << "Inside "<< salary <<endl;
}

int main(void){
    employee e1;
    e1.getdata(10,"shubham",14.625);
    e1.putdata();
}