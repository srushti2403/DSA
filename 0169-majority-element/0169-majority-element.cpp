class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //MOORE'S VOTING ALGO
        int n = nums.size();
        int cnt = 0;
        int el;
        for (int i=0; i<n; i++){
            if (cnt == 0){          //when cnt becomes 0
                el = nums[i];       //el become whichever element i is pointing to
                cnt = 1;            //cnt becomes 1 to count that element first time
            }
            else if(nums[i] == el) cnt++;   //for loop runs again. now if next i = el, cnt increase
            else cnt--;     //else cnt decrease to cancel out
        }

        int cnt1 = 0;
        for (int i=0; i<n; i++){    //run another loop to verify
            if (nums[i] == el) cnt1++;
        }
        if (cnt1 > n/2) return el;

        return -1;
    }
};