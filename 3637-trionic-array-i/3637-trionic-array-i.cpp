class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        for (int p=1; p<n; ++p){
            //check increasing from 0 to p
            bool inc1 = true;
            for (int i=1; i<=p; ++i){
                if (nums[i] <= nums[i-1]){
                    inc1 = false;
                    break;
                }
            }
            if (!inc1) continue;

            for (int q = p+1; q < n-1; ++q){
                //check decreasing from p to q
                bool dec = true;
                for (int i=p+1; i <= q; ++i){
                    if (nums[i] >= nums[i-1]){
                        dec = false;
                        break;
                    }
                }
                if (!dec) continue;

                //check increasing from q to n-1
                bool inc2 = true;
                for (int i = q+1; i < n; ++i){
                    if (nums[i] <= nums[i-1]){
                        inc2 = false;
                        break;
                    }
                }
                if (inc2) return true;
            }
        }
        return false;
    }
};