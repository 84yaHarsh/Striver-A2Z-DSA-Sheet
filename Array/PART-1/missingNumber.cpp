/*    optimal solution 
 T.C ->O(N)    S.C -> O(1) */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missingNum(vector<int>&v1,int n){
    int totalSum = n*(n+1)/2;
    int sum =0;
    for(int i=0; i<n; i++){
        sum+=v1[i];
    }
    return (totalSum-sum);
}
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    cout<<missingNum(v1,n);
    return 0;
}

