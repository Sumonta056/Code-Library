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

#define ll long long
#define pb push_back
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  
   
const int N = int(1e5 + 3);


int main()
{
fast;

ll n;
cin>>n;

vector<ll>arr(n);

for(ll i = 0 ; i < n ; i++)
{
    cin>>arr[i];
}

ll t ;
cin>> t;


for(ll i = 0 ; i < t ; i++)
{
   ll p;
   cin>>p;
   
   vector<ll>::iterator it = lower_bound(arr.begin() , arr.end() , p);
if(*it==p)
{
    cout<<"Yes"<<" ";
    cout<<distance(arr.begin() , it) + 1<<endl;
}

else
{
    cout<<"No"<<" ";
    cout<<distance(arr.begin() , it)+1<<endl;
}
}



} 