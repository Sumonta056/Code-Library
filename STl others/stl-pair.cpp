#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    pair<int , int>a[n];

    for(int i =0 ; i<n ;i++)

    {
        cin>>a[i].first >> a[i].second;

    }
    sort(a , a+n);

    cout<<a[0].first <<" "<<a[0].second<<endl;
    cout<<a[n-1].first <<" "<<a[n-1].second<<endl;

}
