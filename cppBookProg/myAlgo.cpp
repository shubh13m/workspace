#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void makeOdd(int x){
    cout << x + 1 << " ";
}

bool compOnePlus(int i, int j){
    return ((i+1) == j);
}

int main(void){
    vector<int> even {2,4,6,10,12,6};
    vector<int> odd {1,3,5,7,11,5};
    vector<int> mix{1,5,2,3,7,6,3,7,2,6};
    vector<int> mix2{1,5,2,3,7,6,3,4,7,2,6};
    vector<int> mix3{7,6,3,7,2,6,1,5,2,3};

    cout << "All of Even :" << all_of(even.begin(),even.end(),[](int i){return !(i%2);}) << endl;
    cout<< "Any of Even :" << any_of(mix.begin(),mix.end(),[](int i){return !(i%2);}) << endl;
    cout<< "Any of Grt 12 :" << any_of(odd.begin(),odd.end(),[](int i){return i>12;}) << endl;
    cout << "For each make Even+1:";
    for_each(even.begin(),even.end(),makeOdd);
    auto it = find(even.begin(),even.end(),12);
    cout << "Find 12:" << it - even.begin() << endl;
    it = find_if(mix.begin(),mix.end(),[](int i){return !(i%2);});
    cout << "Find first even:" << it - mix.begin() << endl;
    int arr[] = {3,7};
    it = find_end(mix.begin(),mix.end(),arr,arr+1);
    cout << "Find_end :" << it - mix.begin() << endl;
    it = find_end(mix.begin(),mix.end(),arr,arr+1,compOnePlus);
    cout << "Find_end :" << it - mix.begin() << endl;
    it = find_first_of(mix.begin(),mix.end(),even.begin(),even.end());
    cout << "First_of :" << it - mix.begin() << endl;
    cout << count(mix.begin(),mix.end(),3) << endl;
    cout << count_if(mix.begin(),mix.end(),[](int i){return i>2;}) << endl;
    auto p = mismatch(mix.begin(),mix.end(),mix2.begin(),mix.end());
    cout << *p.first << *p.second << endl;
    cout << "Is both equal :" << equal(mix.begin(),mix.end(),mix2.begin()) << endl;
    cout << "Is both permute :" << is_permutation(mix.begin(),mix.end(),mix3.begin()) << endl;
    int arr1[odd.size()];
    copy(odd.begin(),odd.end(),arr1);
    for(auto x:arr1) cout << x << " ";
    cout << endl;
    copy_n(even.begin(),even.size(),arr1);
    for(auto x:arr1) cout << x << " ";
    return 0;
}