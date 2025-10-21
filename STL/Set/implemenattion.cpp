#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s; 
    // for decreasing order 
    // set<int , greater<int>>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    s.insert(30);
    for(auto it=s.begin(); it!= s.end(); it++){
          cout<<*it<<endl;
    }

    //find ->return the iterator of that number
    if(s.find(30)!=s.end()) cout<< "present" <<endl;
    else cout<< "absent"<<endl;
    
    // count ->count of that number if present return 1 else 0
    cout<<s.count(10);
    return 0;
}