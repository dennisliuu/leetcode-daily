class Solution {
public:
    int divide(int dividend, int divisor) {
        long long res = (long long)dividend / (long long)divisor;
        if (res < -2147483648)
            return -2147483648;
        if (res > 2147483647)
            return 2147483647;
        if (res > 0)
            return floor(res);
        else
            return ceil(res);
    }
};
