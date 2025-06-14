//Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); ++i) {
            int j = 0;
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
                ++j;
            }
            prefix = prefix.substr(0, j);
            if (prefix.empty()) return "";
        }

        return prefix;
    }
};

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings:\n";
    for (int i = 0; i < n; ++i) {
        cin >> strs[i];
    }

    Solution sol;
    string result = sol.longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
