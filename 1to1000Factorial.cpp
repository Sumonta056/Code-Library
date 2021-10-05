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

        int n;
        cin>>n;

        int size=2000, fac[size],carry=0 ,j=size-1;

        fac[size-1]=1;
      
        while(n>1)
       {
           int x;
           for(int k=size-1 ; k>=j ; k--)
           {
             x=fac[k]*n+carry;
             fac[k]=x%10;
             carry=x/10;
           }
           while(carry>0)
           {
               fac[--j]=carry%10;
               carry=carry/10;
           }
           n--;
       }
       

       if(2000-j > 4) 
       {
       for(int p=2000-4; p<size;p++) 
       {
           cout<<fac[p];
       }
       }
       else
       {
           for(int p=j; p<size;p++) 
       {
           cout<<fac[p];
       }
       }
       


    }

