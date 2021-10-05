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
   
double d = 0 ;

double determiner( int n , double matrix[10][10] )
{
double submatrix[10][10];

if( n == 2) return ( matrix[0][0]*matrix[1][1]  - (matrix[0][1]*matrix[1][0])) ;

else 
{
    //creating a loop for creating submatrix and determiner of per submatrix

    for(int c = 0 ; c<n ; c++)
    {
        int subi=0;
        for(int i = 1 ; i<n ;i++)
        {
            int subj=0;
            for(int j = 0 ; j<n ; j++)
            {
                if(j==c) continue;

                submatrix[subi][subj]= matrix[i][j];
                subj++;
            }
            subi++;
        }
        d=d+( pow(-1 , c) * matrix[0][c] * determiner (n-1 , submatrix) ); 
    }
}
return d;
}


int main()
{
fast;
int n ;
cin>>n;

double matrix[10][10];

for(int i = 0 ; i < n ; i++)
{
    for(int j = 0 ; j<n ; j++)
    {
        cin>>matrix[i][j];
    }
}


cout<<"Determiner : "<<determiner(n , matrix);



}