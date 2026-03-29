public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        for (int i=0; i<nums.Length; i++){
            int index = Math.Abs(nums[i]) - 1; // create e new index for each number in nums.
            //Flip the number in that index to -ve, marking it visited.
            if (nums[index] > 0){
                nums[index] = -nums[index];
            }
        }

        List<int> result = new List<int>();
        //Loop through array again. Any number that is +ve, that number + 1 is missing. Add is to result list.
        for (int i=0; i<nums.Length; i++){
            if (nums[i] > 0){
                result.Add(i + 1);
            }
        }

        return result;
    }
}