public class Solution {
    public int FindMaxConsecutiveOnes(int[] nums) {
        int n = nums.Length;
        int count = 0;
        int maxCount = 0;

        for (int i = 0; i<n; i++){
            if (nums[i] == 1){
                count++;
            }
            else{
                maxCount = Math.Max(count, maxCount);
                count = 0;
            }
        }
        maxCount = Math.Max(count, maxCount); //update maxCount one last time. If array ends with 1, then we need to update to new 'count'.

        return maxCount;
    }
}