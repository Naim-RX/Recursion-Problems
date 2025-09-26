#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makeCombination(vector<int> &arr, int remSum, vector<int> &cur,vector<vector<int>> &res, int index) {

    // If remSum is 0 then add the combination to the result
    if (remSum == 0) {
        res.push_back(cur);
        return;
    }

    // Invalid Case: If remSum is less than 0 or if ind >= arr.size()
    if (remSum < 0 || index >= arr.size())
        return;

    // add the current element to the combination
    cur.push_back(arr[index]);

    // recur with the same index
    makeCombination(arr, remSum - arr[index], cur, res, index);

    // remove the current element from the combination
    cur.pop_back();

	// recur with the next index
    makeCombination(arr, remSum, cur, res, index + 1);
}

// Function to find all combinations of elements
// in array arr that sum to target.
vector<vector<int>> combinationSum(vector<int> &arr, int target) {
  	sort(arr.begin(), arr.end());

    // vector to store combinations
    vector<int> cur;

    // vector to valid combinations
    vector<vector<int>> res;
    makeCombination(arr, target, cur, res, 0);

    return res;
}

int main() {
    vector<int> arr = {2, 4, 6, 8};
    int target = 8;

    vector<vector<int>> res = combinationSum(arr, target);

    for (vector<int> &v : res) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
