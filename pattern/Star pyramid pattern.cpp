#include<iostream>
using namespace std;

 int main()
 {
     int n;
     cout<< " N = ";
     cin>>n;


     for( int row = 1; row<=n-1 ;  row++)
     {
         for(int col =1;  col<=n-row ; col++)
         {
             cout<<" ";
         }

         for(int col =1; col<=row*2 - 1; col++)
         {
             cout<<"*";
         }

     cout<<endl;
     }



 }

