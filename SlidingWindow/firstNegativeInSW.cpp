/*First negative in every window of size k
Input: arr[] = [12, -1, -7, 8, -15, 30, 16, 28] , k = 3
Output: [-1, -1, -7, -15, -15, 0] 
Explanation:
Window [12, -1, -7] First negative integer is -1.
Window [-1, -7, 8] First negative integer is -1.
Window [-7, 8, -15] First negative integer is -7.
Window [8, -15, 30] First negative integer is -15.
Window [-15, 30, 16] First negative integer is -15.
Window [30, 16, 28] No negative integers, output is 0.
 */
#include<bits/stdc++.h>
using namespace std;
vector<int>firstNegative(vector<int>&arr,int k){
    int i=0,j=0;
    vector<int>v;
    list<int>l;
    while(j<arr.size()){
      if(arr[j]<0){
        l.push_back(arr[j]);
      }
      if(j-i+1 < k )
        j++;
      
      else if(j-i+1 == k){
        if(l.empty())
            v.push_back(0);
        
        else{
            v.push_back(l.front());
            if(!l.empty() && arr[i] == l.front()){
                l.pop_front();
            }    
        }
         i++;
        j++;
      }
    }
         return v;
}
int main(){
    vector<int>v1 = {12, -1, -7, 8, -15, 30, 16, 28};
    int k =3;
    vector<int> ans = firstNegative(v1,3);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}