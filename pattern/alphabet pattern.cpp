
#include<iostream>
using namespace std;

 int main()
 {
     int n;
     cout<<"N = ";
     cin>>n;
 // type 1

      for ( int row1 =1 ; row1<=n ; row1++)
     {
         for( int col1 =1 ; col1<=row1; col1++)
         {
             char a;
             a=col1+64;
             cout<<a;
             }
     cout<<endl;
     }
 }
