public class Solution {
    public int SpecialArray(int[] nums) {
        Array.Sort(nums);
        int n = nums.Length;

        for (int x=1; x <= n; x++){
            int left = 0, right = n-1;
            while (left <= right){
                //BS for first index with value >= x
                int mid = left + (right-left) / 2;
                if (nums[mid] >= x){
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
            if (n - left == x) return x;
        }

        return -1;
    }
}