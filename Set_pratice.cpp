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

    int t ;
    cin >> t;

    while ( t-- )
    {
        int query;
        cin>>query ;

        set<int>s ;
        set<int>::iterator it ;

        while(query--)
        {
           char x ;
           cin >> x ;

           if( x == 'a') 
           {
             //insert a element
             int v ;
             cin >> v ;

             s.insert(v);
           
           }

           if( x == 'b')
           {

               for(it = s.begin() ; it != s.end() ;it++)
               {
                   cout<<*it <<" ";
               }

           }

           if( x == 'c')
           {
               int v ;
               cin >> v ;
               s.erase(v);
           }

           if( x == 'd')
           {
               int v ;
               cin >> v;

               if( s.find(v) != s.end()) cout<<"1";
               else cout <<"-1";

           }
        }
    }

 
}