class Solution {
public:
    int countOdds(int low, int high) {
        return (high - low) / 2 + (low%2 || high%2);
        //odd no. between low and high inclusive formula: (high-low+1)/2
        //so we return (high-low)/2, and then check if either low or high are odd, the whole (low%2 || high%2) becomes 1.
    }
};