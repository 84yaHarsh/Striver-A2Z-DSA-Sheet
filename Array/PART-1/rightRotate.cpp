/*RIGHT ROTATE AN ARRAY BY K PLACES
T.C-> O(N) S.C->O(1) */
#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
       while(start<end){
        swap(arr[start],arr[end]);
        start++,end--;
       }
}
void rightRotate(int arr[],int n,int k){
       if(k>n){
        k = k%n;
    }
    // reverse till k indecies
    reverse(arr,0,n-k-1);
    // reverse k+1 to n-1 places
    reverse(arr,n-k,n-1);
    // reverse whole array
    reverse(arr,0,n-1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int k =2;
    int n = sizeof(arr)/sizeof(int);
    
    rightRotate(arr,n,k);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

