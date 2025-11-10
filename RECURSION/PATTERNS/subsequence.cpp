/*print all the subsequences */
#include<bits/stdc++.h>
using namespace std;
void printSubsequence(int index, vector<int>& arr, vector<int>& current) {
    if (index == arr.size()) {
        for (int i = 0; i < current.size(); i++) cout << current[i] << " ";
        cout << endl;
        return;
    }

    // include
    current.push_back(arr[index]);
    printSubsequence(index + 1, arr, current);

    // exclude
    current.pop_back();
    printSubsequence(index + 1, arr, current);
}
int main(){
    vector<int> arr = {1,2,3};
    int n = arr.size();
    vector<int>current;
    printSubsequence(0,arr,current);
    return 0;
}
