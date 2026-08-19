// Last updated: 8/19/2026, 7:00:05 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if (n != (int)goal.size())
            return false;

        string concat = s + s;
        return concat.find(goal) != string::npos;
    }
};