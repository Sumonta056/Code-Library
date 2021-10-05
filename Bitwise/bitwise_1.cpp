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
// &   AND operator
// |   OR
// ^    XOR
// >>  shift right
// <<  shift left
// ~   not

int a , b; 
a = 32 , b = 12;
int c;

// and gate
c = a & b ;
cout<<c<<endl ;
/*
converting binary form :
a =  1 0 0 0 0 0
b =  0 0 1 1 0 0
and gates multiply one by one

c =  0 0 0 0 0 0 
c = 0 ;
*/


// or gate ( shift + \ )
c = a | b ;
cout<<c<<endl ;
/*
converting binary form :
a =  1 0 0 0 0 0
b =  0 0 1 1 0 0
or gates add one by one

c =  1 0 1 1 0 0 
c = 44 ;
*/

// xor gate
c = a ^ b ;
cout<<c<<endl ;
/*
converting binary form :
a =  1 0 0 0 0 0
b =  0 0 1 1 0 0
xor gates rule ( 0 , 1 ) = 1     (1 , 1 )(0 , 0) = 0

c =  1 0 1 1 0 0 
c = 44 ;
*/

// not gate
unsigned char p = 5;
p = ~p;
printf("%d\n" , p);







}