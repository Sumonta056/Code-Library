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

void merge_AL(int arr[] , int l , int m ,int r)
{
    int i = l;
    int j = m+1;
    int k = l ;

    int temp[5];

    while ( i<=m && j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;

        }

        else
        {
        temp[k]= arr[j];
        j++;
        k++;
        }
        
    }

    while(i<=m)
    {
        temp[k]= arr[i];
        i++;
        k++;

    }
     while(j<=r)
    {
        temp[k]= arr[j];
        j++;
        k++;
        
    }

    for ( int c = l ; c<=r ;c++)
    {
        arr[c]=temp[c];
    }
}    


void mergeSort(int arr[] , int l , int r )
{
    if(r>l)
    {
        int m;
        m = (l+r) / 2;

        mergeSort( arr , l ,m) ;
        mergeSort( arr , m+1 , r);

        merge_AL ( arr , l , m , r);
    }
}


int main()
{
  fast;

int arr[]={2,1,4,3,6};

mergeSort(arr , 0  , 4);

for(int i = 0 ; i < 5 ; i++)
{
    cout<<arr[i]<<" ";
}



}