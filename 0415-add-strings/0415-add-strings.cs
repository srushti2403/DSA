public class Solution {
    public string AddStrings(string num1, string num2) {
        int n = num1.Length, m = num2.Length;
        int i = n-1, j = m-1;
        int carry = 0;
        var result = new System.Text.StringBuilder();

        while (i >= 0 || j >= 0 || carry > 0){
            int digit1;
            if (i >= 0){
                digit1 = num1[i] - '0'; //trick to convert char digit into its int value
            } else {
                digit1 = 0;
            }

            int digit2;
            if (j >= 0){
                digit2 = num2[j] - '0';
            } else {
                digit2 = 0;
            }

            int sum = digit1 + digit2 + carry;
            result.Append(sum % 10); //this will give us remainder, which goes into result string. e.g: 13%10 = 3
            carry = sum / 10; // e.g: 13/10 = 1 (carry)
            i--;
            j--;
        }

        //The result is build backward, so we need to reverse it at the end
        //result.ToString() turns StringBuilder into a plain string.
        //.ToCharArray() splits that string into an array of chars. This is easier to reverse in C#
        var arr = result.ToString().ToCharArray();
        Array.Reverse(arr);
        //string(arr) joins it back into a string.
        return new string(arr);
    }
}