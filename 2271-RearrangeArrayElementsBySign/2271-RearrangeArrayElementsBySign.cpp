// Last updated: 6/24/2026, 8:52:37 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int positive = 0, negative = 1;

        for (int x : nums) {
            if (x > 0) {
                result[positive] = x;
                positive += 2;
            } else {
                result[negative] = x;
                negative += 2;
            }
        }

        return result;
    }
};