/* maxSubarraySum */
#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int>&v1,int k){
     int i =0, j =0;
     int sum =0;
     int maxSum =INT_MIN;
     while(j<v1.size()){
        sum+=v1[j];
        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1 == k){
            maxSum = max(sum,maxSum);
            sum-=v1[i];
            i++;
            j++;
        }
     }
     return maxSum;
}
int main(){
    vector<int>v1 = {100,200,300,400};
    int k =2;
    cout<<maxSubarraySum(v1,k);
    return 0;
}