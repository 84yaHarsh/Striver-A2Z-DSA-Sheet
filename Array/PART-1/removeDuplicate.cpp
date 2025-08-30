/*REMOVE DUPLICATE ELEMENT FROM AN ARRAY SORTED IN INCREASING ORDER ALSO RETURN SIZE
T.C->O(N) S.C->O(1)*/
#include<iostream>
#include<vector>
using namespace std;
int removeDuplicate(vector<int>&v1,int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(v1[i]!=v1[j]){
            i++;
            v1[i] = v1[j];
        }
    }
    return i+1;
}
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    int x = removeDuplicate(v1,n);
    cout<<x<<endl;
    for(int i=0; i<x; i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}