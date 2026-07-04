// Last updated: 7/4/2026, 6:17:54 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int size = matrix.size();
        int colsize = matrix[0].size();

        for (int i=0;i<size;i++){
            for(int j=0;j<colsize;j++){
                if(matrix[i][j]==0){

                    //mark row 
                    for(int k = 0;k<colsize;k++){
                        if(matrix[i][k]!=0){
                            matrix[i][k]=-20;
                        }
                    }
                    //mark column
                    for(int l = 0;l<size;l++){
                        if(matrix[l][j]!=0){
                            matrix[l][j]=-20;
                        }
                    }
                }
            }
        }

        //combine
        for(int i=0;i<size;i++){
            for(int j=0;j<colsize;j++){
                if(matrix[i][j]==-20){
                    matrix[i][j]=0;
                }
            }
        }

    }
};