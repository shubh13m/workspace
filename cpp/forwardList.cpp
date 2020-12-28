#include<iostream>
#include<forward_list>

using namespace std;

void getVal(const forward_list<int> &fwl){
    cout << "---- start ----" << endl;
    for(auto &x: fwl){
        cout << x << endl;
    }
    cout << "---- end ----" <<endl;
}

int main(void){
    cout << "Creating a preintiailised frwarding list" << endl;
    forward_list<int> fl1 = {10,20,30};
    cout << "Inserting element in fwL" << endl;
    fl1.push_front(40);
    getVal(fl1);
    fl1.pop_front();
    getVal(fl1);
    fl1.assign({0,10,20,10,30,10,40});
    getVal(fl1);
    fl1.remove(10);
    getVal(fl1);
    forward_list<int> fl2;
    fl2.assign(fl1.begin(),fl1.end());
    cout << "--- Using for ----" << endl;
    for(auto it=fl2.begin();it != fl2.end();it++){
        cout << *it << endl;
    }
    
    auto it = fl2.insert_after(fl2.begin(),10);
    fl2.insert_after(it,{20,30,40});
    getVal(fl2);
    return 0;
}
