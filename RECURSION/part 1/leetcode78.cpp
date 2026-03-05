#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> res;

void fnc(vector<int>& nums, vector<int>& ans, int i) {
    // Base case
    if (i == nums.size()) {
        res.push_back(ans);
        return;
    }

    // Include nums[i]
    ans.push_back(nums[i]);
    fnc(nums, ans, i + 1);

    // Exclude nums[i] (backtrack)
    ans.pop_back();
    fnc(nums, ans, i + 1);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ans;
    fnc(nums, ans, 0);
    return res;
}

int main() {
    vector<int> v = {1, 2, 3};

    vector<vector<int>> result = subsets(v);

    // Print subsets
    cout << "Subsets are:\n";
    for (auto &subset : result) {
        cout << "{ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "}\n";
    }

    return 0;
}
