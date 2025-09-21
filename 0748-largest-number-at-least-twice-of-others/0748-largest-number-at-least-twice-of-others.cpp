class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxVal = -1, secondMax = -1, maxIdx = -1;
        int n = nums.size();

        for (int i=0; i<n; i++){
            if (nums[i] > maxVal){
                secondMax = maxVal;
                maxVal = nums[i];
                maxIdx = i;
            }
            else if (nums[i] > secondMax){
                secondMax = nums[i];
            }
        }
        // lasrgest num must be at least *2 as second big
        if (maxVal >= 2 * secondMax) return maxIdx;
        return -1;
    }
};