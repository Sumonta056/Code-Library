#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
    vector<long long int>arr(5);
    for(int i = 0 ; i<5  ; i++)
    {
        cin>>arr[i];
    }
    vector< long long int>arr1(5);

    arr1[0]= arr[0]+ arr[1] + arr[2] + arr[3];
    arr1[1]= arr[1]+ arr[2] + arr[3] + arr[4];
    arr1[2]= arr[1]+ arr[0] + arr[3] + arr[4];
    arr1[3]= arr[1]+ arr[0] + arr[2] + arr[4];
    arr1[4]= arr[2]+ arr[0] + arr[3] + arr[4];

    sort(arr1.begin() , arr1.end());

    cout<<arr1[0]<<" "<<arr1[4];
}
