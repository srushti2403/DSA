public class Solution {
    public int LengthOfLastWord(string s) {
        int n = s.Length - 1, wordLength = 0;

        for (int i=n; i>=0; i--){
            if (s[i] != ' '){
                wordLength++;
            }
            else if (wordLength > 0) return wordLength;
        }

        return wordLength;
    }
}