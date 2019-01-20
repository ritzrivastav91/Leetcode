class Solution {
public:
    int fib(int N) {
        int prev_prev_sum = 0;
        int prev_sum = 1;
        int sum = 0;
        if (N==0) return 0;
        if (N==1) return 1;
        for (int i=2; i<=N; i++){
            sum = prev_prev_sum + prev_sum;
            prev_prev_sum = prev_sum;
            prev_sum = sum;
        }
        return sum;
    }
};
