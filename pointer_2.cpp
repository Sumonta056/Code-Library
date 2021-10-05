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
//create a integer with value 10
//create a pointer addressing the integer
//change the integer value = 20 using pointer address ;

int x = 10 ;
printf("The value of x before pointer : %d \n" , x) ;

int *p ;
p = &x ;
//int *p = &x ;

//changing the p value at addree
*p = 20 ;

printf("The value of x after pointer : %d \n" , x) ;

/* 

double pointering

int **px;
px = &p;

printf("The value of px after double pointer : %d \n" , **px) ;

 = **px
 = *(&p)
 = x

eventullay px is prefering to x by double astering **


*/





}