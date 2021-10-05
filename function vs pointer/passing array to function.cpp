#include<iostream>
using namespace std;

void arraye(int o[],int p)
{
    for(int j =0 ; j<p ;j++)
    {
        cout<<o[j]<<endl;
    }
}




int main()
{
   int n;
   cin>>n;

   int s[n];
   for(int  i=0; i<n ; i++)
   {
       cin>>s[i];
   }
   arraye(s,n);
}
