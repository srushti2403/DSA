class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrunk = numBottles;
        int emptyBottles = numBottles;

        while (emptyBottles >= numExchange){
            //How many new full bottles can we get from current empty bottles
            int newFullBottles = emptyBottles / numExchange;
            //Add this new full bottle to total drunk ones
            totalDrunk += newFullBottles;
            //New empty = empty remaining after exchanging + new full which just got empty
            emptyBottles = (emptyBottles % numExchange) + newFullBottles;
        }
        return totalDrunk;
    }
};