// Last updated: 8/23/2026, 8:11:38 PM
class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int answer = 0;

        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int maxFreq = 0;
                int minFreq = INT_MAX;
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }
                answer += (maxFreq - minFreq);
            }
        }

        return answer;
    }
};