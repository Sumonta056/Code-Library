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

// compare the  element with others left side element  than swap

int n ;
cin>> n ;
int arr[n] ;

for(int i = 0 ; i< n ; i++)
{
    cin>>arr[i];
}

for(int i = 1 ; i < n ; i++)
{
int  key = arr[i] ;
 int j = i - 1 ;                 // j = 1

 while( j >= 0 && arr[j] > key)
 {
     arr[j+1] = arr[j];

     j= --j;                   // if j = -1

 }

 arr[j+1] = key ;             //j = 0


}

for(int i = 0 ; i< n ; i++)
{
    cout<<arr[i]<<" ";
}
}