class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<int> result;
        //first go through nums and inside go through each array
        //to add count of integers in hash map
        for (const auto& arr : nums){
            for (int num : arr){
                mp[num]++;
            }
        }
        //then go through map to check how many times each int appears
        //if count is equal to n, then it appeared in all arrays
        for (auto [num, count] : mp){
            if (count == n){
                result.push_back(num);
            }
        }
        //at the end sort result array then return
        sort(result.begin(), result.end());
        return result;
    }
};