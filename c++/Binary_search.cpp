// Binary Search (LeetCode 704)
// Given a sorted array of integers nums and an integer target, 
// return the index of target if it exists, otherwise return -1.
// You must write an algorithm with O(log n) runtime complexity.

// Example:
// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4

// Input: nums = [-1,0,3,5,9,12], target = 2
// Output: -1
// Explanation: 2 does not exist in nums so return -1

// Time Complexity: O(log n) where n = nums.size()
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, target;
    cin >> n; // number of elements
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    cin >> target;

    int left = 0, right = n - 1, ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            ans = mid;
            break;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
