// Running Sum of 1D Array (LeetCode 1480)
// Given an array nums, return the running sum of nums. 
// The running sum is defined as runningSum[i] = sum(nums[0]…nums[i]).

// Example:
// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is calculated as follows: [1, 1+2, 1+2+3, 1+2+3+4]

// Input: nums = [1,1,1,1,1]
// Output: [1,2,3,4,5]

// Time Complexity: O(n) where n = nums.size()
// Space Complexity: O(1) if we modify nums in-place

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    for (int i = 1; i < n; ++i) {
        nums[i] += nums[i - 1];
    }

    for (int i = 0; i < n; ++i) cout << nums[i] << " ";
    cout << '\n';
    return 0;
}
