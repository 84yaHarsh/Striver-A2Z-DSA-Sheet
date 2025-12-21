 /*T.C -> O(N!) 
 S.C -> RECURSION STACK -> O(N) , BOARD SPACE -> O(N^2) , L,UL,DL VECTORS SPACES -> O(N)
   FINAL S.C -> O(N^2) */
#include<bits/stdc++.h>
using namespace std;
void solve(int col, vector<string>&board, vector<vector<string>>&ans, 
    vector<int>&left,vector<int>&upLeft ,vector<int>&downLeft,int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row =0; row<n; row++){
            if(left[row] == 0 && downLeft[row+col] == 0 && upLeft[n-1 + col - row] == 0){
                board[row][col] ='Q';
                left[row] = 1;
                downLeft[row+col] = 1;
                upLeft[n-1 + col - row] = 1;
                solve(col+1,board,ans,left,upLeft,downLeft,n);
                board[row][col] ='.';
                left[row] = 0;
                downLeft[row+col] = 0;
                upLeft[n-1 + col - row] = 0;
            }
        }
    }
vector<vector<string>>nQueen(int n){
     vector<vector<string>>ans;
     vector<string>board(n,string(n,'.'));
     vector<int>left(n) ,upLeft(2*n-1),downLeft(2*n-1);
     solve(0,board,ans,left,upLeft,downLeft,n);
     return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<string>>res = nQueen(n);
    cout<<"total solution is:"<<res.size()<<endl;
    for(int i=0; i<res.size() ; i++){
        for(int j=0; j<res[i].size(); j++){
            cout<<res[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
