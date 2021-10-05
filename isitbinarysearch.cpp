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

int n , k ;
cin >> n >> k ;

string s ;
cin >> s ;

int size = n;
int ans = 0 ;

for(int i = 0 ; i<size ; i++)
{
   char c = s[i] ;
   int diff = 0; 

   for ( int j = 0 ; j<size ; j++)
   {
       if(s[j] != c ) diff++ ;
       
       int v = 0;
       while( diff > k )
       {
           if( s[v] != c) diff-- ;

           v++;
       }

       int subarray = j - k ;

       ans = max ( ans , subarray);
   }
}

cout <<ans+1 ;


}