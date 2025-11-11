#include<bits/stdc++.h>
using namespace std;
void merg(vector<int>&v1,int low,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
       if(v1[left]<=v1[right]){
          temp.push_back(v1[left]);
          left++;
       }
       else {
        temp.push_back(v1[right]);
        right++;
       }
    }
       while(left<=mid){
        temp.push_back(v1[left]);
        left++;
       }
       while(right<=high){
        temp.push_back(v1[right]);
        right++;
       }
    for(int i=low; i<=high; i++){
        v1[i] = temp[i-low];
    }
}
void mergSort(vector<int>&v1,int low,int high){
    if(low>=high) return ;
    int mid = low + (high-low)/2;
    mergSort(v1,low,mid);
    mergSort(v1,mid+1,high);
    merg(v1,low,mid,high);
}
int main(){
    vector<int> v1 = {2,1,4,3,5,7,8};
    int n = v1.size();
    mergSort(v1,0,n-1);
    for(int i=0; i<n; i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}