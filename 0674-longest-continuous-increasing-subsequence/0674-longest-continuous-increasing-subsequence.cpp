class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int curr = 1, maxS = 0;
        for (int i=0; i<n-1; i++){
            if (nums[i] < nums[i+1]){
                curr++;
                maxS = max(maxS, curr);
            }
            else curr = 1;
        }
        maxS = max(maxS, curr);
        return maxS;
    }
};