// Last updated: 8/23/2026, 9:14:04 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        int left = 0, right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if (leftSq > rightSq) {
                temp[pos] = leftSq;
                left++;
            } else {
                temp[pos] = rightSq;
                right--;
            }
            pos--;
        }

        return temp;
    }
};