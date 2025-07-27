class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for (int i=1; i<n-1; ++i){
            int l = i-1, r = i+1;
            while (l >= 0 && nums[l] == nums[i]) l--;   //this is to find cloest non-equal
            while (r <= n-1 && nums[r] == nums[i]) r++; //same
            if (l >= 0 && r <= n-1){
                if (nums[i] > nums[l] && nums[i] > nums[r] || nums[i] < nums[l] && nums[i] < nums[r]){
                    ans++;
                    while (i+1 < n && nums[i] == nums[i+1]) i++;    //this is to skip over duplicates
                }
            }
        }
        return ans;
    }
};