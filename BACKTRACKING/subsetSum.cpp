#include<bits/stdc++.h>
using namespace std;
void SS(vector<int>&arr,int idx,vector<int>&curr,int sum){
    if(idx == arr.size()){
        curr.push_back(sum); // o(n)
        return ;
    }
    // pick
    SS(arr,idx+1,curr,sum-arr[idx]);
    curr.pop_back();
    // not pick
    SS(arr,idx+1,curr,sum);
}
vector<int>subsetSum(vector<int>&arr){
    vector<int>curr;
    SS(arr,0,curr,0);
    return curr;
}
int main(){
    vector<int> arr = {1,2,1};
    sort(arr.begin(),arr.end()); // o(nlogn)
    vector<int> ans = subsetSum(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}