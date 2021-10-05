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

//upper bound returns the first bigger value
// 1 2 3 4 5 7
//if search for 4 
//upper bound will return 5
//if search for 6
//upper bound will return 7  ( 6 is not available in the list)
// if you search for 9 if will end() value



 // 1 2 3 3 3 5
 //if you want to find the index of  last 3 occurence
 //use upper bound  and minus 1 the return value

vector<int>arr = {1,2,3,4,5,7};
vector<int>::iterator it = upper_bound(arr.begin() , arr.end() , 5);

cout<<*it;

//how to get index

cout<<distance(arr.begin() , it);



} 