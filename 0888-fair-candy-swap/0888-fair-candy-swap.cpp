class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n = aliceSizes.size(), m = bobSizes.size();
        int sumA=0, sumB=0;
        for (int i=0; i<n; i++){
            sumA += aliceSizes[i];
        }
        for (int j=0; j<m; j++){
            sumB += bobSizes[j];
        }

        int diff = (sumA - sumB) / 2;

        sort(bobSizes.begin(), bobSizes.end()); //bcoz we only need to do BS on bobSizes

        for (int a : aliceSizes){   //BS loop is inside for loop bcoz we need to perform BS for each of alice's boxes.
            int target_b = a - diff;

            int low = 0, high = m-1;
            while (low <= high){
                int mid = (low + high) / 2;
                if (bobSizes[mid] == target_b) return {a, target_b};
                else if (bobSizes[mid] < target_b) low = mid+1;
                else high = mid-1;
            }
        }

        return {};
    }
};