// Last updated: 6/24/2026, 8:52:54 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
            maxsum = max(sum,maxsum);

            if(sum<0){
                sum = 0;
            }
        }
        return maxsum;
    }
};