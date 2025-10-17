
// Move Zeroes (LeetCode 283)
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// You must do this in-place without making a copy of the array.

// Example:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// Input: nums = [0]
// Output: [0]

// Time Complexity: O(n) where n = nums.size()
// Space Complexity: O(1) (in-place)
>>>>>>> rj

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

<<<<<<< HEAD
    string s;
    getline(cin, s);

    vector<string> v;
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        if (s[i] == ' ') continue;
        int j = i;
        while (j < n && s[j] != ' ') ++j;
        v.push_back(s.substr(i, j - i));
        i = j - 1;
    }

    string out;
    for (int k = (int)v.size() - 1; k >= 0; --k) {
        out += v[k];
        if (k > 0) out += ' ';
    }

    cout << out << '\n';
=======
    vector<int> nums;
    int x;
    while (cin >> x) nums.push_back(x);

    int lastNonZero = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            swap(nums[i], nums[lastNonZero]);
            lastNonZero++;
        }
    }

    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
    cout << '\n';
>>>>>>> rj
    return 0;
}
