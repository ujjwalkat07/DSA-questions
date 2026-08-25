// Last updated: 8/25/2026, 9:30:19 PM
class Solution {
public:
    string shortestPalindrome(string s) {
        int m = s.size();
        if (m == 0)
            return s;

        string rev = s;
        reverse(rev.begin(), rev.end());
        string temp = s + '#' + rev;
        int n = temp.size();

        int prefix = 0, suffix = 1;
        vector<int> lps(n, 0);

        while (suffix < n) {
            if (temp[prefix] == temp[suffix]) {
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
        int palinLen = lps[n - 1];
        string extra = rev.substr(0, m - palinLen);
        return extra + s;
    }
};