#include<iostream>
#include<fstream>

using namespace std;

int main(void){

    ofstream outfile("outCons1.txt");
    
    cout << "Add two lines to add into file" << endl;
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);

    cout << "Writing files in files" << endl;
    outfile << str1 << "\n" << str2;

    cout << "Reading from file and writing into console" << endl;
    outfile.close();
    ifstream infile("outCons1.txt");
    string var;
    while(infile){
        
        getline(infile,var);
        cout << var;
    }

    return 0;
}