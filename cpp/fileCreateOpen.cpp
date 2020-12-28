#include<iostream>
#include<fstream>

using namespace std;

int main(void){

    ofstream outfile;
    outfile.open("outOpen1.txt");
    
    cout << "Add two lines to add into file" << endl;
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);

    cout << "Writing files in files" << endl;
    outfile << str1 << "\n" << str2;

    cout << "Reading from file and writing into console" << endl;
    outfile.close();
    ifstream infile;
    infile.open("outOpen1.txt");

    while(infile){
        string var;
        getline(infile,var);
        cout << var << endl;;
    }

    return 0;
}