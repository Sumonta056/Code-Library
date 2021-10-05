#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int sum=0;

    vector<int>arr(n);

    for(int i =0 ; i< n ; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];

    }
    cout<<sum;
}
