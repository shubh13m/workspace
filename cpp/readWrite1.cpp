#include<iostream>
using namespace std;

int main(void){

    string str;
    char name[20];
    cout << "using getline" << endl;
    getline(cin,str);
    cout<< str<< endl;
    cin.getline(name,20);
    cout.write(name,20);

    return 0;
}