public class Solution {
    public int CalPoints(string[] operations) {
        Stack<int> stack = new Stack<int>();

        foreach (string op in operations){
            if (op == "+"){
                int last = stack.Pop(); //to store the last element
                int newScore = last + stack.Peek(); //we popped the last element and stored it so we can peek at the second last element
                stack.Push(last);
                stack.Push(newScore);
            } else if (op == "D"){
                stack.Push(2 * stack.Peek());
            } else if (op == "C"){
                stack.Pop();
            } else {
                stack.Push(int.Parse(op));
            }
        }

        int sum = 0;
        foreach (int score in stack){
            sum += score;
        }
        return sum;
    }
}