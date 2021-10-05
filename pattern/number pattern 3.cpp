#include<iostream>
using namespace std;

int main()
{
     int  n;
     cout<<" N = " ;
     cin>> n;


     for(int row =1 ; row<=n ; row ++)
     {
           int d=0;
          for( int col =1 ; col<=row ; col++)
          {
                d=d+row;
                              cout<<d;



          }
     cout<<endl;
     }

}
