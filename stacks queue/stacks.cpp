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
   



int main()
{
  
fast;

int n ;
cin>>n ;

stack <ll> x;

for(int i = 1 ; i<=n ; i++)
{
    int type,p ;
    cin>>type;

    if(type == 1)
    {
       cin>>p;
       x.push(p);
    }

    if(type == 2 )
    {
        x.pop();
    }

    if(type == 3)
    {
       int max=0;

       while(!x.empty())
       {
          if(x.top() > max) max = x.top();
          x.pop();
       }
       cout<<max<<endl;
    
    }




}





}