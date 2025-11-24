#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>&v1){
    int total = 0;
    unordered_map<int,int>m;
    m[0] = 1;
    int prefixSum =0;
    for(int i=0; i<v1.size(); i++){
       prefixSum += v1[i];
       if(m.count(prefixSum)){
         total+=m[prefixSum];
         m[prefixSum] ++;
       }
       else 
          m[prefixSum] = 1;
    }
    return total;
}
int main(){
    vector<int> v1 = {6,3,-7,7,4};
    cout<<subarraySum(v1);
    return 0;
}