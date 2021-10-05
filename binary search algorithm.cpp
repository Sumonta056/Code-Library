#include<iostream>
#include<algorithm>
using namespace std ;
int binarysearch(int low , int high , int key ,int arr[])
{
    int mid ;

    while(low <= high)
    {
        mid = (low + high )/2 ;

        cout<< low <<" "<<mid<<" "<<high <<endl;
        if(arr[mid]<key)
        {
            low=mid+1;
        }

        else if(arr[mid]>key) high=mid-1;

        else return mid;
    }

    return -1;
}


int main()
{
    int n ;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int searchroll;
    cout<<"Enter the roll you want to search : ";
    cin>>searchroll;

    int ans;
    ans = binarysearch( 0 , n-1, searchroll, arr);

    if(ans == -1) cout<<"Roll is not present";
    else cout<<"Roll "<<arr[ans]<<" is present";
}
