class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //Transpose matrix
        //O(N/2 * N/2)
        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //Reverse every row
        //O(N * N/2)
        for (int i=0; i<n; i++){
            //row is matrix[i] (vector)
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};