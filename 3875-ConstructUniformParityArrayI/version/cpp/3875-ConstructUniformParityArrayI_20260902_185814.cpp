// Last updated: 9/2/2026, 6:58:14 PM
1class Solution {
2public:
3    bool uniformArray(vector<int>& nums1) {
4        int n = nums1.size();
5        vector<int> temp(n);
6        bool flag;
7
8        for (int i = 0; i < n; i++) {
9            temp[i] = nums1[i];
10            if (temp[i] == nums1[i]) {
11                flag = true;
12            } else {
13                flag = false;
14            }
15        }
16        return flag;
17    }
18};