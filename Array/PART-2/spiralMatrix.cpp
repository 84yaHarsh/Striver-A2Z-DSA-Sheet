/*Print spiral matrix 
T.C->O(n*m) S.C ->O(1)*/
#include<bits/stdc++.h>
using namespace std;
void spiralMatrix(vector<vector<int>>&mat){
    int eRow = mat.size()-1;
    int sRow = 0 ;
    int sCol =0;
    int eCol = mat[0].size()-1;
    while(sRow<=eRow && sCol <=eCol){
        // top row
        for(int j=sCol; j<=eCol; j++){
              cout<<mat[sRow][j]<<" ";
        }
        // right col
         for(int i=sRow+1; i<=eRow; i++){
              cout<<mat[i][eCol]<<" ";
        }
        // bottom row
         for(int j=eCol-1; j>=sCol; j--){
              cout<<mat[eRow][j]<<" ";
        }
        // left col
         for(int i=eRow-1; i>=sRow+1; i--){
              cout<<mat[i][sCol]<<" ";
        }
        sRow++ , eRow--;
        sCol++ , eCol--;
    }
}
int main(){
    int n ,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));
    cout<<"the input matrix is:";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    spiralMatrix(mat);
    return 0;
}

