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

void merge( int arr[], int l ,int m  , int r)
{
    int left_index = l ;
    int right_index = m+1 ;

    int new_index = l ;
    int new_arr[100] ;
    
    //* now we will compare the values of two array
    //* and put the lowest value in a new array and move forward  based on rules

    while( left_index<=m && right_index<=r)
    {
        if(arr[left_index] <= arr[right_index])
        {
            new_arr[new_index] = arr[left_index];

            new_index++;
            left_index++;
        }

        else
        {
            new_arr[new_index] = arr[right_index];

            new_index++;
            right_index++;

        }
    }

    // * after comparing two array we will put all the unchanged value of 1st array in new array
    while ( left_index<=m )
    {
         new_arr[new_index] = arr[left_index];

            new_index++;
            left_index++;
    }

    // * after comparing two array we will put all the unchanged value of 2nd array in new array
    while ( right_index<=r )
    {
         new_arr[new_index] = arr[right_index];

            new_index++;
            right_index++;
    }

    //* copying all the value of new array in our old array
    for( int i = l ; i<=r ; i++)
    {
        arr[i] = new_arr[i];
    }

}

// ! in this function will divide our array in two part ( recursively)
// * for this mergeshort follow divide and conquer method

void merge_sort( int arr[] , int left , int right)
{
    if( left < right)
    {
        int mid = ( left + right) / 2 ;

        // * first part of array
        merge_sort( arr , left , mid);

        //* 2nd part of  array
        merge_sort( arr , mid+1 , right);

        //* we will 1st rearrange the two parts according to the order
        //* then we will merge two array by rearranging it
        merge( arr , left , mid ,right);
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

   // function for merge sort algortihm
   merge_sort ( arr , 0 , size - 1) ;

   for( int i = 0; i<size ; i++)
    {
        
        cout<<arr[i]<<" ";
    }

    

    

}