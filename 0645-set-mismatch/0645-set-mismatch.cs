public class Solution {
    public int[] FindErrorNums(int[] nums) {
        Array.Sort(nums);
        int n = nums.Length;
        int duplicate = -1, missing = 1; //start missing at 1 (incase 1 is missing)
        for (int i=1; i<n; i++){
            if (nums[i] == nums[i-1]){
                duplicate = nums[i];
            }
            else if (nums[i] > nums[i-1]+1){
                //found a gap, so
                missing = nums[i-1] + 1;
            }
        }
        //Edge case: is last number isn't n, then missing is n
        if (nums[n-1] != n){
            missing = n;
        } //if missing is at the end, duplicate is already checked.

        return new int[] {duplicate, missing};
    }
}