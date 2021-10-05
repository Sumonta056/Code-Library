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

// compare the 1st element with others than swap

int n ;
cin>> n ;
int arr[n] ;

for(int i = 0 ; i< n ; i++)
{
    cin>>arr[i];
}

for(int i = 0 ; i< n ; i++)
{
    for(int j = i+1 ; j<n ; j++)
    {
        if(arr[i]>arr[j]) swap(arr[i], arr[j]);
    }
}

for(int i = 0 ; i< n ; i++)
{
    cout<<arr[i]<<" ";
}
}
