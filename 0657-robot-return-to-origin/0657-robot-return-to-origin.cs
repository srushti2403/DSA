public class Solution {
    public bool JudgeCircle(string moves) {
        int vertical = 0, horizontal = 0;
        foreach (char move in moves){
            if (move == 'U') vertical++;
            else if (move == 'D') vertical--;
            else if (move == 'R') horizontal++;
            else if (move == 'L') horizontal--;
        }

        return vertical == 0 && horizontal == 0;
    }
}