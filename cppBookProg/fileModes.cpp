#include<iostream>
#include<fstream>

using namespace std;

int main(void){
    cout << "Using Modes" << endl;
    fstream inputData,inputData1;
    
    inputData.open("digit.txt", ios::in | ios::out);
    inputData1.open("number.txt",ios::in | ios::out | ios::app);
    cout << "file open for read wirte both" << endl;
    string data;

    // inputData.seekp(0,ios::end);
    // cout << "Enter a digit an its number" << endl;
    // getline(cin,data);
    // inputData << endl <<data;
    // getline(cin,data);
    // inputData1 << endl << data;

    // inputData.clear();
    // inputData.seekg(0,ios::beg);
    // inputData1.clear();
    // inputData1.seekg(0,ios::beg);

    // cout << "file data -"  << endl;
    // while(!inputData.eof() && !inputData1.eof()){
    //     inputData >> data;
    //     cout << data ;
    //     inputData1 >> data;
    //     cout << " : " << data << endl;
    // }


    inputData.clear();
    inputData.seekg(15,ios::beg);
    inputData1.clear();
    inputData1.seekg(1,ios::beg);

    string newdata;
    cout << "Enter a digit an its number" << endl;
    getline(cin,newdata);
    inputData <<newdata;
    
    while(!inputData.eof()){
        inputData >> data;
        cout << data << endl;
    }


    return 0;
}
