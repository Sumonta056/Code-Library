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

if(n==1)
{
cout<<n;
return 0;
}

else
{
    vector<ll>arr;
    vector<ll>::iterator it;

    for(ll i = 1 ; i*i<=n ;i++)
    {
        if(n%i==0)
        {
            arr.push_back(i);

            if(n/i != i) arr.push_back(n/i);
        }
    }

    sort(arr.begin() , arr.end());
    
    for(it = arr.begin() ; it!=arr.end() ; it++)
    {
        cout<<*it<<endl;
    }


}





}