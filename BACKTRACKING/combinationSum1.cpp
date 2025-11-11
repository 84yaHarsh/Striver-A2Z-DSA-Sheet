/*find all pattern whose sum is 7 you take one element multiple time 
arr[] : [1,3,2] targetSum: 7
*/
#include<bits/stdc++.h>
using namespace std;
void findCombination(int idx,int target,vector<int>&v1,vector<int>&curr,vector<vector<int>>&ans){
    if(idx == v1.size()){
        if(target == 0){
            ans.push_back(curr);
        }
        return ;
    }
    if(v1[idx] <= target){
        curr.push_back(v1[idx]);
        findCombination(idx,target-v1[idx],v1,curr,ans);
        curr.pop_back();
    }
    findCombination(idx+1,target,v1,curr,ans);
}
vector<vector<int>>combinationSum(int idx,int target,vector<int>v1){
   vector<vector<int>>ans;
   vector<int>curr;
   findCombination(0,target,v1,curr,ans);
   return ans;
}
int main(){
    vector<int>v1 = {1,3,2};
    vector<vector<int>>ans = combinationSum(0,7,v1);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
