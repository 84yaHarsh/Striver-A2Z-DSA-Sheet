/*print only one subsequence whose sum is 2 
arr[] : [1,2,1] , k = 2 */
#include<bits/stdc++.h>
using namespace std;
bool printS(int idx,vector<int>arr,vector<int>&curr,int n,int s ,int sum){
    if(idx == n){
        if(s == sum){
            for(int i=0; i<curr.size(); i++){
                cout<<curr[i] <<" ";
            }
            return true;
        }
        return false;
    }
    curr.push_back(arr[idx]);
    s+=arr[idx];
    if(printS(idx+1,arr,curr,n,s,sum) == true) return true ;
    curr.pop_back();
    s-=arr[idx];
    if(printS(idx+1,arr,curr,n,s,sum) == true) return true;
    return false;
}
int main(){
    vector<int> arr = {1,2,3};
    int n = arr.size();
    vector<int>curr;
    int sum  = 2;
    int s;
    printS(0,arr,curr,n,0,sum);
    return 0;
}