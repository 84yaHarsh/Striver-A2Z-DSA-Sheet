/*SORT AN ARRAY WHICH HAVE 0'S ,1'S,2'S WITHOUT SORTING ALGORITHM
T.C->O(NlogN) S.C ->O(1)*/
#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int start = 0,mid =0,end = n-1;
    while(mid<=end){
       if(arr[mid]==0){
        swap(arr[start],arr[mid]);
          start++, mid++;
       }
       else if(arr[mid]==1){
          mid++;
       }
       else{
           swap(arr[mid],arr[end]);
           end--;
       }
    }
}
int main(){
    int arr[] = {0,1,2,0,1,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

