public class Solution {
    public bool IsAnagram(string s, string t) {
        Dictionary<char, int> dict = new Dictionary<char, int>();

        foreach (char c in s){
            if (dict.ContainsKey(c)) //if the char is already there as a key
                dict[c]++;
            else
                dict[c] = 1;
        }

        foreach (char c in t){
            if (!dict.ContainsKey(c) || dict[c] == 0)
                return false;
            else
                dict[c]--;
        }

        foreach (KeyValuePair<char, int> entry in dict){
            if (entry.Value != 0)
                return false;
        }

        return true;
    }
}