#include<iostream>
#include<fstream>

using namespace std;

int main(void){

    cout << "Handling multiple files" << endl; 
    ofstream dataField("dataFields.txt");
    cout << "Enter two fields" << endl;
    string input;
    getline(cin,input);
    dataField << input << endl;
    getline(cin,input);
    dataField << input ;

    ofstream data("dataValues.txt");
    cout << "Enter three data fields" << endl;

    getline(cin,input);
    data << input << endl;
    getline(cin,input);
    data << input << endl; 
    getline(cin,input);
    data << input;
    
    dataField.close();
    data.close();
    
    cout << "Reading values" << endl;
    ifstream readField("dataFields.txt");
    ifstream readData("dataValues.txt");
    
    string field,outdata;
    
    while(!readData.eof() && !readField.eof()){
        getline(readField,field);
        cout << field ;
        getline(readData,outdata);
        cout << outdata << endl;
    }

    return 0;
}