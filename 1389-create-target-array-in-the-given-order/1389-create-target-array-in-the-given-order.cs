public class Solution {
    public int[] CreateTargetArray(int[] nums, int[] index) {
        var target = new List<int>();
        for (int i = 0; i < nums.Length; i++){
            target.Insert(index[i], nums[i]);
        }
        //Converting lis to array because return type is array.
        return target.ToArray();
    }
}