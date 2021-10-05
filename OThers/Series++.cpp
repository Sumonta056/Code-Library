#include<iostream>
using namespace std;

 int main()
 {

     int n;
     cin>>n;
     int sum=0;
     for(int j =1 ; j<=n ; j++)
     {
         sum=sum+j;
     }
     cout<<"1+2+3+4.......+"<<n<<" = "<<sum<<endl;

int sum1=0;
      for(int i =1 ; i<n ; i++)
     {
         sum1=sum1+(i*(i+1));
     }
     cout<<"1*2+2*3+3*4+.......+"<<n-1<<"*"<<n<<" = "<<sum1;
 }
