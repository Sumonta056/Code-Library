#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long int n,d,i,j,p=0;
    cin>>n>>d;

    vector<long int > arr(n);
    for( i =0 ; i<n ;i++)
    {
        cin>>arr[i];
    }

    for( i =1 ; i<=d ;i++)
    {
        for(j = 0 ; j<n ; j++)
            {
               swap(arr[p],arr[n-1-j]);
        }
    }


    for( i =0 ; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}
/*Left Rotation Hacker Rank Problem Solution.

Solution:

#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *

int main() {
    int n,d,ar[100002];
    cin >> n >> d;
    for(int i = 0; i < n; i++)cin >> ar[(n-d+i)%n];
    for(int i = 0; i < n; i++)cout << ar[i] << " ";
    cout << endl;
    return 0;
}
*/
