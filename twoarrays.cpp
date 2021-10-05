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
{ fast;
 
int t ;
cin>>t ;

while(t--)
{
    int n , k;
    cin>> n >> k ;

    int a[n] , b[n];

    for(int i = 0 ; i<n ; i++ ) cin>>a[i];
    for(int i = 0 ; i<n ; i++ ) cin>>b[i];

    sort(a , a+n);
    

    sort(b , b+n);
    reverse(b, b+n);

    int j= 0;
    
    for (int i = 0 ; i<k ; i++)
    {
       if(a[i] < b[j])
       {
           a[i] = b[j];
           j++;
       }

       else
       {
           break;
       }
       
    }

    int sum = 0 ;

    for(int i = 0 ; i<n ; i++ ) sum = sum + a[i];

    cout<<sum<<endl;

    
}



}