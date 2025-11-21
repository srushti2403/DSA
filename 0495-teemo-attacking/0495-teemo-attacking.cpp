class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        int total = 0;

        for (int i=0; i<n-1; i++){  //till second last, not last element
            int gap = timeSeries[i+1] - timeSeries[i];
            // we can either add the duration, or the gap between next and current element.
            total += min(gap, duration);
        }
        total += duration;  //for that last attack

        return total;
    }
};