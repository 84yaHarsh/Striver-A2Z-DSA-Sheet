#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>m;
    m.insert(make_pair(10,3));
    m.insert(make_pair(20,4));
    m.insert(make_pair(30,2));
    m.insert(make_pair(40,5));
    m.insert(make_pair(20,6));
    m[100] = 6; // key value pair ko create kr skta
    m[30] = 4; // key (30) ki value ko upsate bhi kr skta h

    for(auto it=m.begin(); it!=m.end(); it++){
        cout<< it->first <<" "<<it->second<<endl;
    }
    return 0;
}