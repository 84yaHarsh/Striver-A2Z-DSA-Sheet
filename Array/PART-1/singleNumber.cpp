/*return a number that only appears only ones
[4,1,2,1,2]  return 4
T.C ->O(N) S.C->O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>&v1){
  int xorr =0;
  for(int i=0; i<v1.size(); i++){
    xorr = xorr^v1[i];      // a^0 = a  , a^a =0
  }
  return xorr;
}  
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<nums.size(); i++){
        cin>>nums[i];
    }
    cout<<singleNumber(nums);
    return 0;
}