#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct KeyValInfo {
    int keytype;          // 0:invalid 1:Hdr  2:Meta 3:Exp
    //IR::Expression *exp;  // A key in select()
    int selindex;         // Key position in select()
    string headername;
    int mdnum;
    int offset;
    int size;    
    unsigned int mask;       // Mask for individual field
    int count;             
    unsigned int *matchval;   //matchval[i]
    unsigned int *maskval;    
    struct KeysInfo *next;
};

struct MergeInfo {
    int keytype;             // 0:invlid 1:Hdr  2:Meta 3:Exp
    unsigned int castsize;   // 8:Meta  16:Hdr (limited to first 2keys)
    int count;               // No.of Keys in select(). Initially one per entry. After merge, more than one entries will be present
    KeysInfo* keyvals;       // List of "A key in select() and its corresponding matching values"
    int mdnum;               // In case of Meta
    int start_offset;        // Valid for both Hdr and Meta
    //IR::Expression *exp;     // Key Expression after merge
    unsigned int *matchval;  // After Merge, match values list
    unsigned int *maskval;   // After Merge, Mask values list
    
    MergeInfo() {
        keytype = 0;
        castsize = 0;
        count = 0;
        keyvals = nullptr;
        mdnum = -1;
        start_offset = -1;
        //exp = nullptr;
        matchval = nullptr;
        maskval = nullptr;
    }
};

vector <KeyValInfo*> keyslist;
vector <MergeInfo*> mergelist;

int main(){
    KeyValInfo* kv = new KeyValInfo;
    kv->keytype = 1;
    kv->selindex = 0;
    kv->headername = 'p';
    kv->offset = 0;
    kv->size = 12;
    kv->mask = 1;
    kv->count = 3;      
    //kv-> matchval[0] = 12;
    //kv-> maskval[0] =  4;
    //kv-> KeysInfo *next;
    keyslist.push_back(kv);
    KeyValInfo* kv1 = new KeyValInfo;
    kv1->keytype = 2;
    keyslist.push_back(kv1);
    cout << keyslist[0]->keytype;
    cout << keyslist[1]->keytype;

    
    

}
