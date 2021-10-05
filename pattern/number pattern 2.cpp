#include<iostream>
using namespace std;

 int main()
 {
     int n;
     cout<<"N = ";
     cin>>n;

      for ( int row1 =1 ; row1<=n ; row1++)
     {
         for( int col1 =1 ; col1<=row1; col1++)
         {
             cout<<col1;
             }
     cout<<endl;
     }

      for( int row2 =n-1 ; row2>=1 ; row2--)
    {
        for (int col2 =1;col2<=row2 ; col2++)
             {
                 cout<<col2;
             }

             cout<<endl;
    }

 }
