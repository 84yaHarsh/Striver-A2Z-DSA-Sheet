/*LEFT ROTATE AN ARRAY BY ONE PLACE
T.C->O(N) ,S.C->O(1)*/


#include<iostream>
#include<vector>
using namespace std;
void leftRotate(vector<int>&v1,int n){
    int temp = v1[0];
    for(int i=0; i<n-1; i++){
          v1[i] = v1[i+1];
    }
    v1[n-1] = temp;
    for(int i=0; i<n; i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n; i++){
        cin>>v1[i];
    }
    leftRotate(v1,n);
    return 0;
}