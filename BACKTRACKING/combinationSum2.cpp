/*combination sum 2 
DRY RUN
findCombination(0,4,[])
│
├── i=0 → pick 1
│   ds=[1]
│   └── findCombination(1,3,[1])
│       │
│       ├── i=1 → pick 1
│       │   ds=[1,1]
│       │   └── findCombination(2,2,[1,1])
│       │       │
│       │       ├── i=2 → pick 1
│       │       │   ds=[1,1,1]
│       │       │   └── findCombination(3,1,[1,1,1])
│       │       │       │
│       │       │       ├── i=3 → 2 > target(1) → BREAK
│       │       │       └── return (no result)
│       │       │
│       │       ├── i=3 → pick 2
│       │       │   ds=[1,1,2]
│       │       │   └── findCombination(4,0,[1,1,2])
│       │       │       └── target=0 → ADD RESULT: [1,1,2]
│       │       │
│       │       ├── i=4 → 2 == previous(2) at same level → SKIP
│       │       │
│       │       └── return
│       │
│       ├── i=2 → arr[2]=1 is duplicate at same level → SKIP
│       │
│       ├── i=3 → pick 2
│       │   ds=[1,2]
│       │   └── findCombination(4,1,[1,2])
│       │       │
│       │       ├── i=4 → 2 > target(1) → BREAK
│       │       └── return (no result)
│       │
│       ├── i=4 → duplicate 2 at same level → SKIP
│       │
│       └── return
│
├── i=1 → arr[1]=1 duplicate at level 0 → SKIP
│
├── i=2 → arr[2]=1 duplicate at level 0 → SKIP
│
├── i=3 → pick 2
│   ds=[2]
│   └── findCombination(4,2,[2])
│       │
│       ├── i=4 → pick 2
│       │   ds=[2,2]
│       │   └── findCombination(5,0,[2,2])
│       │       └── target=0 → ADD RESULT: [2,2]
│       │
│       └── return
│
├── i=4 → arr[4]=2 duplicate at level 0 → SKIP
│
└── END

------- > WHY WE USE I>IDX
⭐ Level 0 (ind = 0)

Loop:

i = 0 → OK
i = 1 → i > ind AND arr[1] == arr[0] → skip (duplicate at same level)
i = 2 → skip
i = 3 → OK
i = 4 → skip (duplicate at same level)

Skip duplicates at THIS level.
⭐ Level 1 (ind = 1)

(We entered this level after picking arr[0] = 1 → ds = [1])

Loop:

i = 1 → i == ind → allowed (same number but deeper level)
i = 2 → i > ind AND arr[2] == arr[1] → skip duplicates at THIS level
i = 3 → allowed
i = 4 → skip


ANOTHER WAY OF THINKING
Level 0: ind=0
    i=0 → 1 (pick)
    i=1 → skip
    i=2 → skip
    i=3 → 2 (pick)
    i=4 → skip

Level 1: after picking 1 → ind=1
    i=1 → 1 allowed  ✔ because i == ind
    i=2 → skip duplicate
    i=3 → 2 allowed
    i=4 → skip duplicate

*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void CS(vector<int>& arr, int idx, int target, vector<int>& curr, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {

            // Skip duplicates
            if (i > idx && arr[i] == arr[i - 1]) continue;

            // Pruning
            if (arr[i] > target) break;

            // Choose
            curr.push_back(arr[i]);

            // Recurse with next index
            CS(arr, i + 1, target - arr[i], curr, ans);

            // Backtrack
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());     // Important
        vector<vector<int>> ans;
        vector<int> curr;

        CS(candidates, 0, target, curr, ans);
        return ans;
    }
};

int main() {
    Solution sol;

    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target: ";
    cin >> target;

    vector<vector<int>> result = sol.combinationSum2(arr, target);

    cout << "\nCombinations:\n";
   for(int i=0; i<result.size(); i++){
    for(int j=0; j<result[i].size(); j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
   }

    return 0;
}
