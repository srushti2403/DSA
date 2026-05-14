public class Solution {
    public bool CanMakeArithmeticProgression(int[] arr) {
        Array.Sort(arr);
        int n = arr.Length;
        int diff = arr[0] - arr[1];

        for (int i=1; i<n-1; i++){
            if (arr[i] - arr[i+1] != diff)
                return false;
        }

        return true;
    }
}