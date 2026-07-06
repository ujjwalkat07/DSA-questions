// Last updated: 7/6/2026, 9:45:00 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
            if(mpp[nums[i]] == (n/3)+1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};