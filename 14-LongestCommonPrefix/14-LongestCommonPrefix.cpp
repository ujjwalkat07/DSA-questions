// Last updated: 8/7/2026, 7:41:47 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        if (size == 0)
            return "";

        sort(strs.begin(), strs.end());
        string ans = "";
        string start = strs[0];
        string end = strs[size - 1];

        for (int i = 0; i < start.size(); i++) {
            if (start[i] != end[i])
                break;
            ans.push_back(start[i]);
        }

        return ans;
    }
};