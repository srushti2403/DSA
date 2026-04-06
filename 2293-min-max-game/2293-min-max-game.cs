public class Solution {
    public int MinMaxGame(int[] nums) {
        while (nums.Length > 1){
            int n = nums.Length / 2;
            int[] newNums = new int[n];
            for (int i=0; i<n; i++){
                if (i % 2 == 0){
                    newNums[i] = Math.Min(nums[2*i], nums[2*i+1]);
                } else {
                    newNums[i] = Math.Max(nums[2*i], nums[2*i+1]);
                }
            }
            nums = newNums;
        }
        return nums[0];
    }
}