class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum;
        for (int i=0; i<nums.size(); i++){
            sum += nums[i];
        }

        int x = sum % k;
        return x;
    }
};