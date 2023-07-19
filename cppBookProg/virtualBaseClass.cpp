#include<iostream>
using namespace std;

class Human{
    private:
        bool gender;
    public:
        bool getGender(){
            return gender;
        }
        void setGender(bool x){
            gender = x;
        }
};

class Male : virtual public Human{
    
        string fname;
    public:
        string getFname(){
            return fname;
        }
        void setFname(string str){
            fname = str;
        }
};

class Female : virtual public Human{
    
        string mname;
    public :
        string getMname(){
            return mname;
        }
        void setMname(string x){
            mname = x;
        }
};

class Child : public Male, public Female{
        string name;
    
    public:
        void setname(string x,string y, string z){
            name = z;
            setFname(x);
            setMname(y);
        }
        string getname(void){
            return name;
        }
        void getInfo(void){
            cout << "F : " << getFname() <<endl;
            cout << "M : "<< getMname() << endl;
            cout << "N : " << getname() << endl;
        }

};


int main(void){
    Child c;
    c.setname("pradeep","suman","sonam");
    c.getInfo();
    return 0;
}