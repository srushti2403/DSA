class Solution {
public:
    int countAsterisks(string s) {
        bool insideBar = false;
        int count = 0;

        for (char c : s){
            if (c == '|'){
                insideBar = !insideBar; //Flip the flag
            }
            else if(c == '*' && !insideBar) count++;
        }
        return count;
    }
};