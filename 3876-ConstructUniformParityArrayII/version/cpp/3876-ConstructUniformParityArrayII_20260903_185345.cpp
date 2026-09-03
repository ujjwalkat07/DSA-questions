// Last updated: 9/3/2026, 6:53:45 PM
1class Solution {
2public:
3    bool uniformArray(vector<int>& nums1) {
4        bool hasOdd = false, hasEven = false;
5        int minOdd = INT_MAX, minEven = INT_MAX;
6
7        for (int x : nums1) {
8            if (x & 1) { // safe for negatives too (two's complement)
9                hasOdd = true;
10                minOdd = min(minOdd, x);
11            } else {
12                hasEven = true;
13                minEven = min(minEven, x);
14            }
15        }
16
17        if (!hasOdd)
18            return true; // target: all-even
19        if (!hasEven || minOdd < minEven)
20            return true; // target: all-odd
21        return false;
22    }
23};
24