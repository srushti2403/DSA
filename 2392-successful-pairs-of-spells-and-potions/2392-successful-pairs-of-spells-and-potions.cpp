class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int m = potions.size();
        vector<int> pairs;

        for (int spell : spells){
            long long minPotion = (success + spell - 1) / spell; //ceiling division
            auto it = lower_bound(potions.begin(), potions.end(), minPotion);
            pairs.push_back(m - (it - potions.begin()));
        }
        return pairs;
    }
};