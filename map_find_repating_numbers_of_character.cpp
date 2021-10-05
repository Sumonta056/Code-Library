//        ** Sumonta Saha Mridul **                                    SWE - SUST 
/*     

         ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
        ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
        ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
         ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
              ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
        ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
         ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define pii         pair<int,int>
#define pll         pair<long,long>
#define mp(a,b)     make_pair(a,b)
#define vi          vector<int>
#define vll         vector<ll>
#define vii         vector<pii>
#define Mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define f           first
#define s           second
#define lb          lower_bound
#define ub          upper_bound
#define sz(x)       (int)x.size()
#define endl         '\n'

#define F(i,s,e)    for(ll i=s;i<e;++i)
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define rem(i,a,b)  for(int i=a;i>b;i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  


#define mod   1000000007
#define INF   numeric_limits<ll>::max();
#define NINF  numeric_limits<ll>::min();
const int N = int(1e5 + 3);


int main()
{ 
    fast;

    // String assddssa
    // ans a = 2 s = 4 d = 2

    string s = "assddssa" ;

    map<char , int> rep;

    for( int i = 0 ; i < s.length() ; i++)
    {
        char c = s[i];

        rep[c]++;
    }

    
    for( auto it = rep.begin() ; it != rep.end() ; it++)
    {
        cout<<it->first<<" "<<it->second<<endl;

    }
   
    


}

/* 

! prime numbers
bool is_prime(int X)
{
	for(int i = 2; i*i < X; i++)
    {
		if(X % i == 0)
        {
			return false;
		}
	}
	return true;
}

! GCD 
int gcd(int a, int b)
{
	if(b == 0)
    {
		return a;
	}
	else
    {
		return gcd(b, a % b);
	}
}

*/
