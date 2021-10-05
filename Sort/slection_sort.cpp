// ** Sumonta Saha Mridul **
// SWE - SUST

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

// find the minimum value of the array than swap it to first

int n ;
cin>> n ;
int arr[n] ;

for(int i = 0 ; i< n ; i++)
{
    cin>>arr[i];
}
int min;

for(int i = 0 ; i< n-1  ; i++)
{
    min = i ;

    for(int j = i+1 ; j<n ; j++)
    {
        if(arr[j]<arr[min]) min = j ; //comparing all the value with min value
    }

    swap ( arr[i], arr[min] );
}

for(int i = 0 ; i< n ; i++)
{
    cout<<arr[i]<<" ";
}
}