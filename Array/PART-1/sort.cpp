/*CHECK IF ARRAY IS SORTED OR NOT
T.C->O(N) S.C->O(1)*/
#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>&v1,int n){
    for(int i=0; i<n-1; i++){
        if(v1[i]>v1[i+1]){
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    cout<<isSorted(v1,n);
}

