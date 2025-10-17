// Max Number of K-Sum Pairs (LeetCode 1679)
// Given an integer array nums and an integer k. In one operation you pick two numbers from the array whose sum equals k and remove them. Return the maximum number of operations you can perform.
// Example: nums = [1,2,3,4], k = 5 → output 2


// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    unordered_map<int,int> mp;
    int ops = 0;
    for (int x : a) {
        int want = k - x;
        if (mp[want] > 0) {
            // found a complement, use it
            mp[want]--;
            ops++;
        } else {
            mp[x]++; // store x for future
        }
    }

    cout << ops << '\n';
    return 0;
}