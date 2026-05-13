public class Solution {
    public char FindTheDifference(string s, string t) {
        Dictionary<char, int> dict = new Dictionary<char, int>();

        foreach (char c in s){
            if(dict.ContainsKey(c))
                dict[c]++;
            else
                dict[c] = 1;
        }

        foreach (char c in t){
            if (!dict.ContainsKey(c) || dict[c] == 0)
                return c; //This is the extra char
            else
                dict[c]--;
        }

        return ' ';
    }
}