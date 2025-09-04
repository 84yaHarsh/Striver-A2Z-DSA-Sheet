/*search in sorted 2d matrix
t.c->O(m+n) s.c ->O(1) */
#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>&mat,int target){
    int row = mat.size();
    int col = mat[0].size();
    int i = 0 , j = col-1;
    while(j>=0 && i<row){
        if(mat[i][j]==target){
            cout<<"("<<i<<","<<j<<")"<<endl;
            return true;
        }
        else if(mat[i][j]>target){
            j--;
        }
        else {
            i++;
        }
    }
    return false;
}
int main(){
    int n,m, target;
    cin>>n>>m>>target;
    vector<vector<int>> mat (n,vector<int>(m));
    for(int i=0; i<mat.size(); i++){
      for(int j=0; j<m; j++){
         cin>>mat[i][j];
      } 
     
    }
     cout<<search(mat,target);
    return 0;
}