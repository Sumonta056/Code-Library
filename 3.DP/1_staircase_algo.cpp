// * u can either jump 1 or 2 
#define long long ll

ll dp[1000001] ;
ll mod = 1e9+7 ;

void init()
{
    dp[1] = 1;
    dp[2] = 2;
    //dp[3] = 4 ;

    for( int i = 4 ; i <= 1000000 ; i++)
    {
        //dp[i] = (dp[i-3] + dp[i-2] + dp[i-1]) % mod ;
        dp[i] = (dp[i-2] + dp[i-1]) % mod ;
    }

    
}

int main()
{
    init() ;
}