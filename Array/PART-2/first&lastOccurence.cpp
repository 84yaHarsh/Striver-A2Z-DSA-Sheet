/*find first and last occurance in an sorted array
T.C->O(N) , S.C ->O(1)*/
#include<bits/stdc++.h>
using namespace std;
int findFirst(vector<int>&v1,int target){
    int n = v1.size();
    int start =0,end = n-1;
    int first =-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(v1[mid]==target){
              first = mid;
              end = mid-1;
        }
        else if(v1[mid]>target){
            end = mid -1;
        }
        else {
            start = mid+1;
        }
    }
    return first;
}
int findLast(vector<int>&v1,int target){
    int n = v1.size(),  start =0;
    int end  = n-1, last = -1;
       while(start<=end){
        int mid = start+(end-start)/2;
        if(v1[mid]==target){
              last = mid;
              start = mid+1;
        }
        else if(v1[mid]>target){
            end = mid -1;
        }
        else {
            start = mid+1;
        }
    }
    return last;
}   
vector<int>findOccurence(vector<int>&arr,int target){
    int first = findFirst(arr,target);
    int last = findLast(arr,target);
    return {first,last};
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans = findOccurence(arr,target);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
