#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     long int n,q;
    cin>>n>>q;

    vector<vector<long int> > arr(n);

    for(long int i = 0 ; i<n ; i++)
    {
        int i2;
        cin>>i2;

        arr[i]=vector<long int>(i2);

        for(long int j =0 ; j<i2 ; j++)
        {
            cin>>arr[i][j];
        }

    }

    for(long int k=1 ; k<=q ; k++)
    {
       long int i ,j;
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }

}
