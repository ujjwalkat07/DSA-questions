// Last updated: 7/28/2026, 8:04:54 PM
class Solution {
public:
    bool isAnagram(string s, string t) {

        int n = s.size();
        int m = t.size();

        if (n != m)
            return false;

        int freq[26] = {0};

        for (int ch = 0; ch < n; ch++) {
            freq[s[ch] - 'a']++;
        }
        for (int ch = 0; ch < n; ch++) {
            freq[t[ch] - 'a']--;
        }
        
        for(int i = 0;i<26;i++){
            if(freq[i]!=0) return false;
        }

        return true;
    }
};