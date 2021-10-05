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
#include<cstring>
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
//must have #include<cstring> header file

//This function takes two strings as arguments and compare these two strings lexicographically

/*
strcmp() compares the two strings lexicographically means it starts comparison character by character starting from the first character until the characters in both strings are equal or a NULL character is encountered.
If first character in both strings are equal, then this function will check the second character, if this is also equal then it will check the third and so on
This process will be continued until a character in either string is NULL or the characters are unequal.
*/

 char leftStr[] = "z f z"; 
 char rightStr[] = "g f g"; 
      
    // Using strcmp() 
    int res = strcmp(leftStr, rightStr); 
      
    if (res==0) 
        printf("Strings are equal"); 
    else 
        printf("Strings are unequal"); 
      
    printf("\nValue returned by strcmp() is:  %d" , res); 

    // res = 0 both string are same
    // res>0 1st string is bigger
    // res<0 2nd string is bigger
    return 0; 





}