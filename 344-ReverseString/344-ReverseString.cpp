// Last updated: 7/17/2026, 11:29:18 AM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int start = 0;
        int end = n - 1;

        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};