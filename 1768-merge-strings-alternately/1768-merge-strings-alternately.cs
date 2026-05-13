public class Solution {
    public string MergeAlternately(string word1, string word2) {
        int n = word1.Length;
        int m = word2.Length;
        StringBuilder result = new StringBuilder();

        int i=0, j=0;

        while (i<n && j<m){
            result.Append(word1[i]);
            result.Append(word2[j]);
            i++;
            j++;
        }

        while (i < n){
            result.Append(word1[i]);
            i++;
        }

        while (j < m){
            result.Append(word2[j]);
            j++;
        }

        return result.ToString();
    }
}