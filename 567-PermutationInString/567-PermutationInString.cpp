// Last updated: 7/28/2026, 8:04:47 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if (n > m) return false;

        int freq1[26] = {0};
        for (int i = 0; i < n; i++) {
            freq1[s1[i] - 'a']++;
        }

        int windowSiz = n;
        for (int i = 0; i <= m - n; i++) {  
            int windowidx = 0, idx = i;
            int winFreq[26] = {0};

            while (windowidx < windowSiz && idx < m) {
                winFreq[s2[idx] - 'a']++;    // fixed: use idx, not i
                windowidx++, idx++;
            }

            bool isMatch = true;
            
            for (int j = 0; j < 26; j++) {   // compare winFreq to freq1
                if (winFreq[j] != freq1[j]) {
                    isMatch = false;
                    break;
                }
            }
            if (isMatch) return true;
        }

        return false;  // no window matched
    }
};