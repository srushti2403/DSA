public class Solution {
    public int[] SmallerNumbersThanCurrent(int[] nums) {
        int[] sorted = (int[])nums.Clone(); //clone arraya, so we don't change original array
        Array.Sort(sorted); //sort cloned array
        Dictionary<int, int> map = new Dictionary<int, int>();

        //For each number in nums, store its index in the Dic. (which equals how many numbers are smaller than that one)
        for(int i=0; i < sorted.Length; i++){
            if (!map.ContainsKey(sorted[i])){
                map[sorted[i]] = i; //map[sorted[i]] -> key | i -> value
            }
        }

        //Build the res using the indexes in the Dic.
        int[] res = new int[nums.Length];
        for (int i=0; i < nums.Length; i++){
            res[i] = map[nums[i]];
        }

        return res;
    }
}