// Last updated: 7/6/2026, 8:39:25 PM
class Solution {
public:
    vector<int> generateRows(int row) {
        int answer = 1;
        vector<int> ans;
        ans.push_back(1);

        for (int col = 1; col < row;col++) {
            answer = answer * (row - col);
            answer = answer / col;
            ans.push_back(answer);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> temp;
        for (int i = 1; i <= numRows; i++) {
            temp.push_back(generateRows(i));
        }
        return temp;
    }
};