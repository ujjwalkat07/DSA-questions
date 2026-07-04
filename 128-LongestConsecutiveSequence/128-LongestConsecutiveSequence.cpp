// Last updated: 7/4/2026, 6:17:52 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxCount = 0;

        for (int num : numSet) {
            // only start counting if num is the beginning of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int length = 1;
                int current = num;
                while (numSet.find(current + 1) != numSet.end()) {
                    current++;
                    length++;
                }
                maxCount = max(maxCount, length);
            }
        }

        return maxCount;
    }
};