class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currSum = 0, count = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;

        for (int n : nums){
            currSum += n;
            if (mp.count(currSum - k)){
                count += mp[currSum - k];
            }
            mp[currSum]++;
        }
        return count;
    }
};