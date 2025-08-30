/*SORT AN ARRAY OF 0'S AND 1'S WITHOUT SORTING ALGORITHM
EXAMPLE-> [1,0,1,0,1,0]  -> [0,0,0,1,1,1]  */ 

#include<iostream>
using namespace std;
void sortZeroOne(int arr[],int n){
    int start =0,end = n-1;
    while(start<end){
        while(arr[start]!=1 && start<end){
            start++;
        }
        while(arr[end]!=0 && start<end){
            end--;
        }
    if(start<end){
        swap(arr[start],arr[end]);
        start++ ,end--;
       }
    }
    
}
int main(){
    int arr[] = {1,0,1,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortZeroOne(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}