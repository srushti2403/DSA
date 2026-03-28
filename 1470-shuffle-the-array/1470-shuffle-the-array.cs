public class Solution {
    public int[] Shuffle(int[] nums, int n) {
        int[] result = new int[2*n];
        int j = 0;

        for (int i=0; i<n; i++){
            result[j++] = nums[i]; //j++ means filling out j and then incrementing.
            result[j++] = nums[i+n];
        }

        return result;
    }
}