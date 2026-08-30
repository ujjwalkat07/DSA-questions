// Last updated: 8/30/2026, 11:22:29 PM
class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int n = nums.size();
        int best = 0;

        // skip == -1 means "remove nothing"; skip == j means "remove index j"
        for (int skip = -1; skip < n; skip++) {
            vector<int> arr;
            arr.reserve(n);
            for (int idx = 0; idx < n; idx++) {
                if (idx == skip) continue;
                arr.push_back(nums[idx]);
            }

            int m = arr.size();
            if (m < 2) continue; // no valid split positions possible

            vector<int> prefix(m), suffix(m);
            prefix[0] = arr[0];
            for (int i = 1; i < m; i++) prefix[i] = __gcd(prefix[i - 1], arr[i]);

            suffix[m - 1] = arr[m - 1];
            for (int i = m - 2; i >= 0; i--) suffix[i] = __gcd(suffix[i + 1], arr[i]);

            int score = 0;
            for (int i = 0; i < m - 1; i++) {
                if (prefix[i] == suffix[i + 1]) score++;
            }
            best = max(best, score);
        }
        return best;
    }
};