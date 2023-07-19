#include<iostream>
using namespace std;

class Error{
    public:
        int errorCode;
        string errMsg;

        Error(int x, string str){
            cout << "Constructed " << endl;
            errorCode = x;
            errMsg = str;
        }
        void displayErr(){
            cout << " Error (" << errorCode << ") : " << errMsg << endl;
        }
};

int main(void){
    int x,y,z;
    cout << "Enter three values non zero" << endl;
    cin >> x >> y >> z;
    try{
        cout << "inside try" <<endl;
        if(x==0 || y==0 || z==0){
            throw Error(12,"should be a non-zero value");
        }
        if (x>6 || y>6 || z>6){
            throw Error(124,"Index out of bound");
        }
    }
    catch(Error e){
        cout << "inside catch" << endl;
        e.displayErr();
    }
    return 0;
}