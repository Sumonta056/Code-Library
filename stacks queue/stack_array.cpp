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
   



int main()
{
  
fast;

long stack[100000];


int query;
cin>>query ;

int max= 0 ;
int top= 0 ;
int n ;


while(query>0)
{ 
    int type;
    cin>>type;

    if(type == 1)
    {
       cin>>n;
       if(n>max) max = n;

       stack[++top] = n;

    }
    
    if(type == 2)
    {
        if(stack[top]==max)
        {
            top--;
            max= 0;

            int p = top;
            while(p>-1)
            {
                if(stack[p]>max) max = stack[p];
                p--;
            }
        }
        else top--;
    }

    if(type == 3)
    {
        cout<<max<<endl;
    }
    query--;
}






}