/*FIND SECOND LARGEST ELEMENT IN AN ARRAY*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int secondMax(const vector<int>&arr,int n){
    if(n<2) return INT_MIN;
    int max = arr[0];
    int s_max = INT_MIN;
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            s_max = max;
            max = arr[i];
        }
        else if(arr[i]<max && arr[i]>s_max){
            s_max = arr[i];
        }
    }
    return s_max;
}
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
 
 int x = secondMax(v1,n);
 if(x==INT_MIN){
    cout<<"element does not exist";
 }
 else{
    cout<<x;
 }
    return 0;
}


