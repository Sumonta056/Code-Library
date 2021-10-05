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

int arr[n];

for(int i = 0 ; i<n ; i++) cin>>arr[i];

int d = 0 , s = 0;

int i  = 0 , j = n - 1;

for(int p = 1 ; p <=n ; p++)
{
  if(p%2 != 0)
  {
    if(arr[j] > arr[i] )
   {
       s = s + arr[j];
       j--;
   }
   else
   {
      s = s + arr[i];
      i++;
   }
  }

    else
     {
    if(arr[j] > arr[i] )
   {
       d = d + arr[j];
       j--;
   }
   else
   {
      d = d + arr[i];
      i++;
   }    
}
 


}

cout<<s<<" "<<d;

}