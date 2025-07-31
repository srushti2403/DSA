class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1) return nums[0];
        int i = 0, j = (i+k-1);
        double sum = 0;

        for (int i=0; i<k; ++i){
            sum += nums[i]; //calculate sum for first k elements
        }
        double maxSum = sum;

        for (int i=k; i<n; ++i){    //start from k, slide window to find max sum
            sum += nums[i] - nums[i-k]; //adds i and removes i-k
            maxSum = max(maxSum, sum);
        }
        return maxSum / k;  //return max sum/k which gives max avg
    }
};