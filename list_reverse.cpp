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

int t ;
cin>>t ;

 list<int>arr;
    list<int>::iterator it;

for (int  i = 0; i < t; i++)
{
    int n ;
    cin>>n;

   

    for (int i = 0; i <n; i++)
    {
        int k;
        cin>>k;

        arr.push_back(k);
    }

    arr.reverse();

    for(it = arr.begin() ; it!=arr.end() ; it++)
    {
        cout<<*it<<endl;
    }
    arr.empty();
}




}