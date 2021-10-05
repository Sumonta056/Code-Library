// * u can either jump 1 or 2

long long dp[1000001] = {0};

int stairs(int n)
{
    // * base case
    if (n <= 2)
        return n;

    // * if ( n == 3 ) return 4 ;

    if (dp[n] != 0)
        return dp[n];

    dp[n] = stairs(n - 1) + stairs(n - 2);

    return dp[n];
}