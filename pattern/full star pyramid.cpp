#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row =1; row<=n; row++)
    {
        for(int col =1; col<=n-row ; col++)
        {
            cout<<" ";
        }


        for(int col1 =1; col1<=2*row-1 ; col1++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    for(int row1=n-1; row1>=1; row1--)
    {
        for(int col =1; col<=n-row1 ; col++)
        {
            cout<<" ";
        }


        for(int col1 =1; col1<=2*row1-1 ; col1++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
