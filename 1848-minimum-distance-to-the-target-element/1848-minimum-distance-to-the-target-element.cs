public class Solution {
    public int GetMinDistance(int[] nums, int target, int start) {
        int n = nums.Length;
        int res, minRes = int.MaxValue;

        for (int i=0; i<n; i++){
            if(nums[i] == target){
                res = Math.Abs(i - start);
                minRes = Math.Min(minRes, res);
            }
        }
        return minRes;
    }
}