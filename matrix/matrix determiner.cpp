#include<iostream>
using namespace std;

 int main()
 {
     int m,n;
     cout<<"Enter The Number Of Row : ";
     cin>>m;

     cout<<"Enter The Number of Column : ";
     cin>>n;

     int arr[m][n];

     for(int i =0 ; i<m ; i++)
     {
         for(int j =0 ; j<n; j++)
         {
             cin>>arr[i][j];
         }
     }


       int a;
       a=( arr[1][1] * arr[2][2] )-( arr[1][2] * arr[2][1] );

       int b;
       b=( arr[1][2] * arr[0][2] )-( arr[1][0] * arr[2][2] );

       int c;
       c=( arr[1][0] * arr[2][1] )-( arr[2][0] * arr[1][1] ) ;

       int det;
       det= arr[0][0] * a + arr[0][1] * b + arr[0][2] * c ;

       cout<<det;




 }
