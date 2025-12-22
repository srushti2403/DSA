class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt = 0;
        int n = strs.size(); //no. of cols
        int m = strs[0].size(); //no. of rows
        
        for (int col=0; col<m; col++){
            for (int row=1; row<n; row++){
                if (strs[row][col] < strs[row-1][col]){
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};