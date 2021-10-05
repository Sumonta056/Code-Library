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

//* we will find the middle index
//* correct arranged value for it

int partition ( int arr[], int low , int high)
{
   int i , j , t ;

   int mid = arr[high];
    
    // 6 3 8 4 7 5

   for( i = low - 1 , j = low ; j < high ; j++)
   {
       if( arr[j] < mid)
       {
           i = i+1;

           t =arr[j];
           arr[j]=arr[i];
           arr[i]=t ;
       }
   }

   // 3 4 8 6 7 5

   arr[high] = arr[i+1];
   arr[i+1] = mid; 

   // 3 4 5 6 7 8

   return i+1 ;
}

//* In this function , we will 1st find the middle index of array
//* Then we will call a function  to find the correct value for middle index element
//* then we will divide the array in two part
//* the first will have all the lowest value from middle value
//* 2nd part will have all the greater value than middle value
//* then we will do it recursively

void quick_sort( int arr[] , int low , int high)
{
    if( low < high)
    {
        // 6 3 8 4 7 5
        int middle ;
        middle = partition( arr , low , high);

        // 3 4 5 6 7 8

        quick_sort(arr , low , middle - 1 );
        // 3 4

        quick_sort(arr , middle+1 , high);
        // 6 7 8

    }

}

int main()
{ 
    fast;

   int size; 
   cin>>size ;

   int arr[100];
   
   for(int i = 0 ; i < size ; i++)
   {
       cin>>arr[i] ;
   }

   // function for quick sort algortihm
   quick_sort ( arr , 0 , size - 1) ;

   for( int i = 0; i<size ; i++)
    {
        
        cout<<arr[i]<<" ";
    }


    

}


