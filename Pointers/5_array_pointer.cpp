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

int a[10] ;

// array address
cout << a << endl;
cout << &a[0] << endl;

// in pointer u can treat a as a[0]
a[0] = 5 ;
cout<< *a <<endl;

//accessing the other elements of array ;
a[1] = 6;

int *p = a + 1 ;  //access 1st element p = a[1]
cout<<*p <<endl;
// p[0] =  a + 0 ; 

cout<<&p<<endl;
cout<<&a[1]<<endl;

//here p and a[1] are not same address cz while creating *p pointer it creates a new address 

// accessing i element of array
// int *p = a + i   or p = a[i]





}