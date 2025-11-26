#include<bits/stdc++.h>
using namespace std;
// unique key will be present
// order will not mantain
// duplicate key are not allowed
// it uses hasing for implementation
// insert,delete and search operation takes constant o(1) time
int main(){
    unordered_map<int,int>m;
    m.insert(make_pair(10,2));
    m.insert(make_pair(20,4));
    m.insert(make_pair(45,7));
    m[56] = 43;

    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}