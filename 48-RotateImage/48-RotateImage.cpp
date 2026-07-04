// Last updated: 7/4/2026, 6:17:56 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
 
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         vector<vector<int>> temp(n, vector<int>(n));
 
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 temp[j][(n-i)-1] = matrix[i][j];
//             }
//         }

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 matrix[i][j] = temp[i][j];
//             }
//         }
        
//     }
// };