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

void change( int *p)
{
    *p = 20;
    printf("%d\n" , *p);
}

int main()
{
fast;
//pass by reference

int x = 10 ;
change(&x);

printf("%d" , x );

}

/*
pass by value

void change ( int x )
{
     x =  20;
     printf(x);
}

int main()
{
    int x = 10 ;
    change(x);

    printf("x");
}


ans : 
20 
10

//in function we are just passing the x value of int main()
//in function we are considering the value as int x
//so x in void change and x in int main() are not same they prefer different address


*/