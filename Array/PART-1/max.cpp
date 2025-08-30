/*FIND LARGEST ELEMENT IN AN ARRAY*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maximum(vector<int>&v1,int m){
    int max = v1[0];
    for(int i=1; i<m; i++){
        if(v1[i]>max){
             max = v1[i];
        }
    }
    return max;
}
int main(){
    int n ;
    cin>>n;
    vector<int> v1(n);
  
    for(int i=0; i<n;  i++){
       cin>>v1[i];
    }
    
    int z = maximum(v1,n);
    cout<<z<<endl;
    return 0;
}

