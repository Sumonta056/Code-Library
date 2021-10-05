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

// pointer used to acces a memory address to fasten the code

int x = 10 ;

// ' & ' used for accessing address
printf("Memory address : %d " , &x );
printf("\n");

// ' * ' used for accessing value on address
printf("Value in address : %d " , *(&x) );
printf("\n");

// how to create pointer
// variable type* variable

int *p;
p =  &x;

printf("The address of p after using poiner : %d" , p);
printf("\n");

printf("The value of p after using poiner : %d" , *p);

}