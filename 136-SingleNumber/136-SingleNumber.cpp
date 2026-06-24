// Last updated: 6/24/2026, 8:52:50 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int counter = 0;
        int num1;
        for (int i = 0; i < nums.size(); i++) {
            num1 = nums[i];
            counter=0;
            for (int j = 0; j < nums.size(); j++) {
                if (num1 == nums[j]) {
                    counter++;
                }
            }
            if (counter == 1) {
                break;
                // return num1;
            }
        }

        return num1;
    }
};