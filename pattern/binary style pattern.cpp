
#include<iostream>
using namespace std;

 int main()
 {
     int n,d;
     cout<<"N = ";
     cin>>n;
 // type 1

      for ( int row1 =1 ; row1<=n ; row1++)
     {
         for( int col1 =1 ; col1<=row1; col1++)
         {
             if(row1%2==0) d=0;
             else d=1;

             cout<<d;
             }
     cout<<endl;
     }

     //type 2

      for ( int row1 =1 ; row1<=n ; row1++)
     {
         for( int col1 =1 ; col1<=row1; col1++)
         {
             if(col1%2==0) d=0;
             else d=1;

             cout<<d;
             }
     cout<<endl;
     }
 }
