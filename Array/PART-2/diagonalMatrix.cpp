/*sum of primary and secondery diagonal element */
#include<bits/stdc++.h>
using namespace std;
void diagonalElement(vector<vector<int>>&v1){
    int n = v1.size();
    int sum =0;
    for(int i=0; i<n; i++){
        sum+=v1[i][i];
        if(i!=n-i-1){
            sum+=v1[i][n-i-1];
        }
    }
    cout<<"the sum of the diagonal element is :"<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<mat[0].size(); j++){
            cin>>mat[i][j];
        }
    }
    diagonalElement(mat);
    return 0;
}