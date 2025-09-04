/* Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

Examples

Example 1:
Input Format: N = 3, k = 5, array[] = {2,3,5}
Result: 2
Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

Example 2:
Input Format: N = 5, k = 10, array[] = {2,3,5,1,9}
Result: 3
Explanation: The longest subarray with sum 10 is {2, 3, 5}. And its length is 3.*/

#include<bits/stdc++.h>
using namespace std;
   int longestSubarray(vector<int>&v1,int key){
    int sum =0;
       for(int i=0; i<v1.size(); i++){
           if(sum == key){
            return i;
           }
           else{
            sum+=v1[i];
           }
       }
       return -1;
   } 
int main(){
    int n,key;
    cin>>n>>key;
    vector<int>v1(n);
    for(int i=0; i<v1.size(); i++){
        cin>>v1[i];
    }
    cout<<longestSubarray(v1,key);
    return 0;
}