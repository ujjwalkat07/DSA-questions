// Last updated: 8/30/2026, 11:22:06 PM
1class Solution {
2public:
3    int beautySum(string s) {
4        int n = s.size();
5        int answer = 0;
6
7        for (int i = 0; i < n; i++) {
8            vector<int> freq(26, 0);
9            for (int j = i; j < n; j++) {
10                freq[s[j] - 'a']++;
11
12                int maxFreq = 0;
13                int minFreq = INT_MAX;
14                for (int k = 0; k < 26; k++) {
15                    if (freq[k] > 0) {
16                        maxFreq = max(maxFreq, freq[k]);
17                        minFreq = min(minFreq, freq[k]);
18                    }
19                }
20                answer += (maxFreq - minFreq);
21            }
22        }
23
24        return answer;
25    }
26};