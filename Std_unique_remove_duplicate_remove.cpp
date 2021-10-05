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

// * your array will be on sorted : Careful
 
 vector <int> v = { 1, 2, 3, 3, 3, 10, 1, 2, 3, 7, 7, 8 };

 vector < int> ::iterator it ;

sort(v.begin() , v.end()) ;

// 1 1 2 2 3 3 3 3 7 7 8 8 10

it = unique(v.begin() , v.begin()+12) ;

// v is now 1 2 3 7 8 10 * * * *
// * are undefined values in vector

// ! now we have to resize the vector
v.resize( distance(v.begin() , it)) ;



//print

for( it = v.begin() ; it!=v.end() ; it++)
{
    cout<<*it<<endl;
}

    

    

}