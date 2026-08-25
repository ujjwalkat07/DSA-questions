// Last updated: 8/25/2026, 9:29:57 PM
class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        int prefix = 0, suffix = 1;
        vector<int> lps(n, 0);

        while (suffix < n) {
            if (s[prefix] == s[suffix]) {
                lps[suffix] = prefix + 1;
                prefix++;
                suffix++;
            } else {
                if (prefix == 0) {
                    lps[suffix] = 0;
                    suffix++;
                } else {
                    prefix = lps[prefix - 1];
                }
            }
        }

        return s.substr(0, lps[n - 1]);
    }
};