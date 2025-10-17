// 151. Reverse Words in a String
// Given an input string s, reverse the order of the words. A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
// Return a string of the words in reverse order, concatenated by a single space. Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

// Example 1:
// Input: s = "the sky is blue"
// Output: "blue is sky the"

// Example 2:
// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.

//Example 3:
// Input: s = "a good   example"
// Output: "example good a"
// Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.


// Time Complexity: O(n)  where n = s.length()
// Space Complexity: O(n)  for storing words

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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
    return 0;
}
