// Last updated: 7/6/2026, 8:39:28 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0;
        int right = m - 1;
        int top = 0;
        int bottom = n - 1;

        vector<int> temps;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                temps.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                temps.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    temps.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    temps.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return temps;
    }
};