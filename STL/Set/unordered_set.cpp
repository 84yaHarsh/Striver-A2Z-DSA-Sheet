/*  It contain only unique element 
    search,insert,removal have average time complexity
    it uses hashing technique to achieve it
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;   
    /*for multiset
    unordered_multiset<int>s;*/
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(50);

    for(auto it = s.begin(); it!=s.end() ; it++){
        cout<<(*it)<<endl;
    }
    return 0;
}