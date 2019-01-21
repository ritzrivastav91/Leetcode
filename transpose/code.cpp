class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int row = A.size();
        int col = A[0].size();
        vector<vector<int>> B(col, vector<int>(row));
        for(int i=0; i<col; i++){
            for(int j=0; j<row; j++){
                B[i][j] = A[j][i];
            }
        }
        return B;
    }
};
