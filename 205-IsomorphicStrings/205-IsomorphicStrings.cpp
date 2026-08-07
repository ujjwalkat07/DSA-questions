// Last updated: 8/7/2026, 7:41:22 PM
// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         unordered_map<char, char> mp1;   
//         unordered_map<char, char> mp2;
//         int n = s.length();

//         for (int i = 0; i < n; i++) {
//             char ch1 = s[i];
//             char ch2 = t[i];

//             if ((mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2) ||
//                 (mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1))
//                 return false;

//             mp1[ch1] = ch2;
//             mp2[ch2] = ch1;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        
        int map1[256] = {0};
        int map2[256] = {0};
        int n = s.length();

        for (int i = 0; i < n; i++) {
            char ch1 = s[i];
            char ch2 = t[i];

            if (map1[ch1] != 0 && map1[ch1] != ch2 || map2[ch2] != 0 && map2[ch2] != ch1) return false;

            map1[ch1] = ch2;
            map2[ch2] = ch1;
        }
        return true;
    }
};