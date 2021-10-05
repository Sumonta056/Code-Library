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
    int n ;
    cin >> n;
    int two = 0 , one = 0;
    for(int i = 0 ; i<n ; i++)
    {
        int x ;
        cin>>x;

        if(x == 1) one++;
        else two++;
    }

    int sum = one + (2 * two) ;

    if ( sum%2 != 0)
    {
        cout<<"NO"<<endl;
    }

    else
    {
        sum = sum / 2 ;

        if ( sum%2 == 0 || (sum%2==1 && one!=0) )
        {
            cout<<"YES"<<endl;
        }
        else
       {
              cout<<"NO"<<endl;
    }
       }
    }
    
    

}





