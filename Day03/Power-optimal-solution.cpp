class Solution {
public:
    double pow(double x, long n)
    {
        if (n == 0)
        {
            return 1;
        }
        if (n % 2 == 0)
        {
            return pow(x * x, n / 2);
        }
        return x * pow(x, n - 1);
    }
    double myPow(double x, int n) {
        double ans = 1.0;
        if(n > 0)
            return pow(x,n);
        return double(1.0) / pow(x,abs(n));
    }
};