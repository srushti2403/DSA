class Solution {
public:
    bool isPalindrome(int x) {
        int orig = x;
        int reverse = 0;
        int rem;

        if (x<0 || (x%10 == 0 && x != 0)) return false;

        while (x != 0){
            rem = x % 10;
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && rem > 7)) return false;
            reverse = (reverse * 10) + rem;
            x /= 10;
        }

        return reverse == orig;
    }
};