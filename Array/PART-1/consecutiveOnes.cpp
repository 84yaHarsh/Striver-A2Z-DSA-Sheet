/*FIND MAX CONSECUTIVE ONES IN AN ARRAY 
[1,0,1,1,0,1] 
T.C ->O(N) S.C->O(1)*/

#include<bits/stdc++.h>
using namespace std;
int consecutiveOnes(vector<int>&v1){
    int count = 0, maxCount =0;
    for(int i=0; i<v1.size(); i++){
        if(v1[i]==1){
            count+=1;
        }
        else{
            count =0;
        }
    maxCount = max(maxCount,count);
    }
  return maxCount;
}
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
cout<< consecutiveOnes(v1);
   return 0;
}