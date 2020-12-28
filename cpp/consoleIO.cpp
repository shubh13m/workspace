#include<iostream>
using namespace std;



int main(void){

    cout << "Name : ";
    int age;
    char name[10],str,str1,str2;
    // cin >> age >> name;
    // cout << age << name;
    cout << "start";
    cin.get(str);
    cout << str;
    cin.get(str);
    cout << str;
    cin >> str;
    cout << str;
    while(str != '\n'){
        cout << str;
        cin.get(str);
    }

    cout << "get(*) and put()";
    cin.get(str1);
    cout.put(str1);
    char ch ;
    ch = cin.get();
    cout.put(ch);

    return 0;
}