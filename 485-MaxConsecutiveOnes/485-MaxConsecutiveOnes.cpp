// Last updated: 6/24/2026, 8:52:42 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1 = 0;
        int counter = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                counter = counter + 1;
                max1=max(max1,counter);
            } else {
                counter = 0;
            }
        }

        return max1;
    }
};