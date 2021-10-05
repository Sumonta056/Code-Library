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

int n , m ;
cin >> n  >> m ;

int ans = 0 ;

int a[n] = {0};
int b[m] = {0} ;

for(int i = 0 ; i<n; i++)
{
    cin>>a[i];
}

for(int j= 0 ; j<m; j++)
{
    cin>>b[j];
}



    for (int i=0; i<=n-m; i++)
    {
       int check = 0 ;
       int c = 0 ;
       for(int j = i ; j< n ; j++)
       {
           if (c<m) 
           {
               if(a[j] != b[c])
               {
                   check = 1;
                   break;
               }

               c++;
           }

           else break ;
           
       }
       if(check == 0) ans++ ;
    }

    cout <<ans;
}


