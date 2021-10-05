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

int b = 13 ;

int left = b >> 1;
// left shifting
// 13 = 1 1 0 1
// if we left shift 1
// it will be  1 1 0 = 6         //last digit remove

int right = b << 1;
// right shifting
// 13 = 1 1 0 1
// if we left shift 1
// it will be  1 1 0 1 0 = 26   // last add 0 always

cout<<left<<" "<<right<<endl;

right = b << 2 ;
cout<<right<<endl ;

right = b << 3 ;
cout<<right<<endl ;

// right shifting
// 13 = 1 1 0 1
// if we right shift 2
// it will be  1 1 0 1 0 0 = 52      //  at last add 2 0 always because 2 shifting
// it will be  1 1 0 1 0 0 0 = 104   //  at last add 3 0 always because 3 shifting


//right shift rules
// x << k
// ans = x * (2^k);

left = b >> 2;
// left shifting
// if we left shift 2
// it will be  1 1  = 3         //last 2 digit remove because of 2 shifting

//left shift rules
// x >> k
// ans = x / (2^k);

// 13 >> 2 
// ans = 13 / (2^2)  = 3.33
//as integer value it will show 3

cout<< left ;







}