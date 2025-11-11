/*single ellement in an sorted array*/
#include<bits/stdc++.h>
using namespace std;
int singleElement(vector<int>&v1,int n){
    int start =1,end = n-2;
    if(n==1) return v1[0];
    if(v1[0]!=v1[1]) return v1[0];
    if(v1[n-1]!= v1[n-2]) return v1[n-1]; 
    while(start <=end){
        int mid = start +(end-start)/2;
        if(v1[mid]!=v1[mid-1]&& v1[mid]!=v1[mid+1]){
            return v1[mid];
        }
       if((mid%2==1 && v1[mid-1]==v1[mid]) || (mid%2==0 && v1[mid+1] == v1[mid])){
             start = mid  +1;
        }
        else {
             end = mid -1;
        }
    }
    return -1;
}

int main(){
    vector<int>v1 = {1,1,2,3,3,4,4};
    int n = v1.size();
    int ele =  singleElement(v1,n);
    cout<<ele<<endl;
    return 0;
}