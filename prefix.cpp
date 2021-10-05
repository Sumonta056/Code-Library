//        ** Sumonta Saha Mridul **             2019831056             SWE - SUST 

#include <bits/stdc++.h>
using namespace std;


#define F(i,s,e) for(ll i=s;i<e;++i)
#define ll long long
#define pb push_back
using vll = vector<ll>;
#define P(str) cout << str << endl
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  
   
const int N = int(1e5 + 3);


int main()
{ 
    fast;

    int n ;
    cin>>n ;

    int a[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];

    }

     int ans = a[0] ;

    for(int i = 0 ; i < n ; i++)
    { 
   
    ans = max ( ans , a[i]) ;
        
     
        cout << ans << " " ;
    }

}
