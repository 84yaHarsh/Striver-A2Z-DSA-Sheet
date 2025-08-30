/*LEFT ROTATE AN ARRAY BY D PLACES
T.C->O(N) ,S.C->O(1)*/
#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&v1,int start,int end){
    
    while(start<=end){
        int temp = v1[start];
        v1[start]  = v1[end];
        v1[end] = temp;

        start++,end--;
    }
}
void leftRotate(vector<int>&v1,int n,int k){
    k = k%n;
     reverse(v1,0,k-1);
     reverse(v1,k,n-1);
     reverse(v1,0,n-1);
}
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    leftRotate(v1,n,k);
    for(int i=0; i<n; i++){
        cout<<v1[i]<<" ";
    }
    
    
    return 0;
}