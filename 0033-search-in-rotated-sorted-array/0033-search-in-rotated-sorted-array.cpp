class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;

        while (low <= high){
            int mid = (low+high) / 2;
            if (nums[mid] == target) return mid;

            //check if left is sorted
            if (nums[low] <= nums[mid]){
                //check if target can be in left half
                if (nums[low] <= target && target <= nums[mid]) high = mid-1;
                else low = mid+1;
            }
            //if not, then right is sorted
            else {
                //check if target can be in right half
                if (nums[mid] <= target && target <= nums[high]) low = mid+1;
                else high = mid-1;
            }
        }
        return -1;
    }
};