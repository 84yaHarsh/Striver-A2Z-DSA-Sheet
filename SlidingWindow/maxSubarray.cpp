/**/
#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {

    list<int> l;        // holds elements in decreasing order
    vector<int> ans;

    int i = 0, j = 0;

    while (j < arr.size()) {

        // STEP 1: Remove smaller elements from back
        while (!l.empty() && l.back() < arr[j]) {
            l.pop_back();
        }

        // STEP 2: Push current element
        l.push_back(arr[j]);

        // STEP 3: If window size < k → expand window
        if (j - i + 1 < k) {
            j++;
        }

        // STEP 4: When window size == k
        else if (j - i + 1 == k) {

            // front of list = maximum
            ans.push_back(l.front());

            // STEP 5: Before sliding, remove outgoing element
            if (arr[i] == l.front()) {
                l.pop_front();
            }

            // slide window
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> res = maxSlidingWindow(arr, k);

    for (int x : res) cout << x << " ";
}
