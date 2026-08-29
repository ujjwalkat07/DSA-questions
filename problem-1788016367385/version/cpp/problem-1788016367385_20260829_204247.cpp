// Last updated: 8/29/2026, 8:42:47 PM
1class Solution {
2public:
3    int maxValidSplits(vector<int>& nums) {
4        int n = nums.size();
5        int best = 0;
6
7        // skip == -1 means "remove nothing"; skip == j means "remove index j"
8        for (int skip = -1; skip < n; skip++) {
9            vector<int> arr;
10            arr.reserve(n);
11            for (int idx = 0; idx < n; idx++) {
12                if (idx == skip) continue;
13                arr.push_back(nums[idx]);
14            }
15
16            int m = arr.size();
17            if (m < 2) continue; // no valid split positions possible
18
19            vector<int> prefix(m), suffix(m);
20            prefix[0] = arr[0];
21            for (int i = 1; i < m; i++) prefix[i] = __gcd(prefix[i - 1], arr[i]);
22
23            suffix[m - 1] = arr[m - 1];
24            for (int i = m - 2; i >= 0; i--) suffix[i] = __gcd(suffix[i + 1], arr[i]);
25
26            int score = 0;
27            for (int i = 0; i < m - 1; i++) {
28                if (prefix[i] == suffix[i + 1]) score++;
29            }
30            best = max(best, score);
31        }
32        return best;
33    }
34};