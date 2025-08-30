/*  MOVE ZERO TO THE END
T.C->O(N),S.C->O(1)*/

#include<iostream>
#include<vector>
using namespace std;
void moveZerotoEnd(vector<int>&v1,int n){
    int pos =0;
    for(int i=0; i<n; i++){
        if(v1[i]!=0){
            swap(v1[i],v1[pos]);
            pos++;
        }
    }
}

int main(){
    int n,k;
    cin>>n;
  
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    moveZerotoEnd(v1,n);
    for(int i=0; i<n; i++){
        cout<<v1[i]<<" ";
    }
    
    
    return 0;
}