class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> mp;
        int n = grid.size();
        int range = n*n;

        for (int i=1; i <= range; ++i){
            mp[i] = 0;
        }

        for (int i=0; i<n; ++i){
            for (int j=0; j<n; ++j){
                mp[grid[i][j]]++;
            }
        }

        int repeated = -1, missing = -1;
        for (auto& [num, count] : mp){
            if (count == 2) repeated = num;
            if (count == 0) missing = num;
        }
        return {repeated, missing};
    }
};