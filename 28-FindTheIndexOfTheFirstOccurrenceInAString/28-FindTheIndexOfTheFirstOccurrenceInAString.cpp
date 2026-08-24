// Last updated: 8/24/2026, 11:04:14 PM
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         if (haystack.size() < needle.size())
//             return -1;

//         for (int i = 0; i < haystack.size(); i++) {
//             int j = 0;

//             while (j < needle.size() && (i + j) < haystack.size()) {
//                 if (needle.at(j) != haystack.at(i + j))
//                     break;
//                 j++;
//             }

//             if (j == needle.size()) {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };


class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if (m == 0) return 0;

        // Step 1: Build LPS array for needle
        vector<int> lps(m, 0);
        int len = 0; // length of previous longest prefix-suffix
        int i = 1;
        while (i < m) {
            if (needle[i] == needle[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        // Step 2: KMP search
        int hi = 0, ni = 0;
        while (hi < n) {
            if (haystack[hi] == needle[ni]) {
                hi++;
                ni++;
                if (ni == m) {
                    return hi - ni; // match found
                }
            } else {
                if (ni != 0) {
                    ni = lps[ni - 1];
                } else {
                    hi++;
                }
            }
        }
        return -1;
    }
};