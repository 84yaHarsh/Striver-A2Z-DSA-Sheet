/*count all the subsequence whose sum is 2 
arr[] : [1,2,1] , k = 2 */
#include<bits/stdc++.h>
using namespace std;
int printS(int idx,vector<int>arr,int n,int s ,int sum){
    if(idx == n){
        if(s == sum) return 1;
        else return 0;
    }
    
    s+=arr[idx];
    int left = printS(idx+1,arr,n,s,sum) ;

    s-=arr[idx];
    int right = printS(idx+1,arr,n,s,sum);
    return right + left ;
}
int main(){
    vector<int> arr = {1,2,3};
    int n = arr.size();
    vector<int>curr;
    int sum  = 2;
    int s;
   cout<<  printS(0,arr,n,0,sum);
    return 0;
}