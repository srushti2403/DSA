public class Solution {
    public bool IsMonotonic(int[] nums) {
        int n = nums.Length;
        bool inc = true, dec = true;

        for (int i=1; i<n; i++){
            if (nums[i] < nums[i-1]) inc = false;
            if (nums[i] > nums[i-1]) dec = false;
        }

        return inc || dec;
    }
}