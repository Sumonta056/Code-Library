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

vector < pair <int ,int> > arr ;

int n , m ;
cin>> n >> m ;

int ans  = 0 ;

for(int i = 1 ; i<=n ; i++)
{
  int x ;
  cin>>x;

  arr.push_back( make_pair(i, x) ); 
     
}
int i = 0 ;

while(!arr.empty())
{
 if(m > arr[i].second)  arr.erase(arr.begin() + i);

 else 
 {
     int p = arr[i].second;
     p = p - m;

     int index = arr[i].first;

     arr.erase(arr.begin() + i);;

     arr.push_back( make_pair(index, p) );

     ans = index; 

 }
 i++;
}

cout<<ans;



}