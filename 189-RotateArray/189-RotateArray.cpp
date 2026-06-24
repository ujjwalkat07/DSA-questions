// Last updated: 6/24/2026, 8:52:45 PM
class Solution {
public:
    void reversefun(vector<int>& arr, int start, int end) {
        while (start <= end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    // void rotate(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     k = k % n;
    //     if (k == 0)
    //         return;

    //     vector<int> temp;
    //     for (int i = n - k; i < n; i++) {
    //         temp.push_back(nums[i]); // temp = [5,6,7]
    //     }
    //     for (int i = n - 1; i >= k; i--) {
    //         nums[i] = nums[i - k];
    //     }
    //     for (int i = 0; i < k; i++) {
    //         nums[i] = temp[i];
    //     }
    // }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reversefun(nums, 0, n - k - 1);
        reversefun(nums, n - k, n - 1);
        reversefun(nums, 0, n - 1);
    }
};