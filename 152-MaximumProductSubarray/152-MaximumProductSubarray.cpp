// Last updated: 8/24/2026, 11:04:01 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProd = nums[0];

        for (int i = 0; i < n; i++) {
            int product = 1;      
            for (int j = i; j < n; j++) {
                product *= nums[j];   
                if (product > maxProd) {
                    maxProd = product;  
                }
            }
        }

        return maxProd;
    }
};