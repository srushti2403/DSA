class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int low = 0, high = n-1;

        while (low <= high){
            int mid = (low + high) / 2;

            if (nums[mid] != mid){
                high = mid-1;
            }
            else low = mid+1;
        }

        return low;
    }
};

// [0, 1, 2, 3, 4, 5, 6, 7, 9]
//  0. 1. 2. 3. 4. 5. 6. 7. 8

