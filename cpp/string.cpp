#include<iostream>
using namespace std;

int main(void){

    string str1,str2;
    str1 = "This is string1";
    cout << "Enter string2" << endl;
    getline(cin,str2);

    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl; 

    cout << "%% using functions" << endl;
    cout << "-- Append "<< endl;
    str1.append(str2);
    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl;

    cout << "-- Assign " << endl;
    str1.assign(str2);
    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl;

    cout << "-- at " << endl;
    cout << str1.at(2) << endl;

    cout << "-- begin" << endl;
    *str1.begin() = 70;
    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl;

    cout  << "-- compare" << endl;
    str1.compare(str2)>0  ? (cout << "str1 : " << str1 << "is greater than " << "str2 : " << str2) : (cout << "str2 : " << str2 << "is greater than " << "str1 : " << str1);

    cout << "-- empty" << endl;
    cout << "making str1 empty first then checking value" << endl;
    str1.assign("");
    cout << "Checking empty return : " <<  str1.empty() <<  endl << "assigning str2 value to str1" << endl;
    str1.assign(str2);
    cout << "Checking empty return : " <<  str1.empty() << endl;

    cout << "--end" << endl;
    *(str1.end()-1) = '1';
    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl;

    cout << "--erase"<< endl;
    str1.erase(2);
    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl;
    str1.assign(str2);
    *(str1.end()-1) = '3';
    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl;
    str1.erase(2,6);
    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl;
    

    cout << "--find" << endl;
    str1.assign(str2);
    *(str1.end()-1) = '3';
    cout << str1.find('r') <<  endl;
    cout << str1.find("ring") <<  endl;

    cout << "-- insert" << endl;
    cout << str1.insert(5,str2) << endl;
    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl;

    cout << "-- length" << endl;
    cout << str1.length() << endl;

    cout << "-- replace" << endl;
    cout << str1.replace(5,6,str2) << endl;
    cout << "str1 : " << str1 << endl << "str2 : " << str2 << endl;

    cout << "-- substr" << endl;
    int pos  =  str1.find(str2);
    cout << pos <<endl<<str1.substr(pos); 
    return 0;
}