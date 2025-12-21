#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>board(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            board[i].push_back('.');
        }
    }
    return 0;
}
