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

int arr[6] = {4 , 5 , 6 , 7 , 8 , 9};
int x = 17 ;

int i = 0 , j = 6 - 1;

while(i<j)
{
    if(arr[i]+arr[j] == x)
    {
        cout<<arr[i]<<" "<<arr[j];
        break;

    }

    else if(arr[i] + arr[j] < x) i++;

    else j++;

}

// how it works 
// 4 , 5 , 6 , 7 , 8 , 9
// we will add 1st and last number
//if sum is less than x will move to 1st to 2nd
//if sum is big than we move 9 to 8
//untill it matches




}