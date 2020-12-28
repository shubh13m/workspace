#include<iostream>
#include<iomanip>
using namespace std;

ostream & myunit(ostream& var){
    var << "sikka";
    return var;
}

ostream& myformat(ostream& var){
    var << setw(8) <<setfill('/');
    return var;
} 

int main(void){

    float x,y,z;
    cin>>x>>y>>z;
    cout.fill('*');
    cout.precision(4);
    cout.width(7);
    cout<< x*y << endl;

    cout << setfill('%') << setprecision(4) << setw(7) << x*z << endl;
    
    cout << "usig user defined manip" << endl;
    cout << myformat << x+y+z << myunit;
    return 0;
}