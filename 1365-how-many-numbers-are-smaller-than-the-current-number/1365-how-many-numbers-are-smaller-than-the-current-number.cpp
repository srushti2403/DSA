class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        int n = sorted.size();
        unordered_map<int, int> mp;

        for (int i=0; i<n; ++i){
            if (mp.find(sorted[i]) == mp.end()){    //so if the number is already present in the map, it will just skip it.
                mp[sorted[i]] = i;  //index of the current number gives the number of numbers smaller that itself.
            }
        }
        vector<int> res;
        for (int num : nums){
            res.push_back(mp[num]);
        }
        return res;
    }
};