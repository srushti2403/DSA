class Solution {
public:
    bool isPowerOfFour(int n) {
        return (n > 0) &&               //check if it's positive
               ((n & (n-1)) == 0) &&    //to check if it's a power of 2. n AND n-1 always give all 0's if only 1 bit is set.
               ((n - 1) % 3 == 0);      //For powers of four, (n - 1) is always divisible by 3.
    }
};