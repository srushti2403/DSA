class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;
        for (int c=1; c <= n; ++c){
            for (int a=1; a <= n; ++a){
                int b2 = c*c - a*a;
                if (b2 >= 1){
                    int b = sqrt(b2);
                    if (b >= 1 && b <= n && b*b == b2){
                        cnt += 1;
                    }
                }
            }
        }
        return cnt;
    }
};