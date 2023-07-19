#include<iostream>
using namespace std;

int main(void){
    string str;
    char x;
    cout << "---- Using cin to read string ----"<< endl;
    cin >> str;
    cout << "after first space word not take" << endl;
    cout << str << endl;
    cout << "Reading again beacuse char are still in buffer" << endl;
    cin >> str ;
    cout << str << endl ;
    cout << "Reading alpha num using get" << endl;
    cin >> str;
    cout << str << endl;
    cout << "Reading alpha num using get" << endl;
    cin >> x;
    cout << x << endl;

    cout << "Reading with get(*)"<< endl;
    char a;
    //cin.get(str); doesnt work as 
    cin.get(a);
    cin.get(a);
    cout << "now rading using loop" << endl;
    while(a != '\n'){
        cout << a;
        cin.get(a);
    }

    cout << "Reading alpha num using get" << endl;
    cin.get(a);
    while(a != '\n'){
        cout << a << endl;
        cin.get(a);
    }



    return 0;
}

