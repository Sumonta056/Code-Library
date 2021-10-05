
#include<iostream>
using namespace std;
 int main()
 {
     for ( int i =1 ; i<=15 ; i++)
     {
         if(i==10) continue; // skip the loop when condition matched

         cout<<i<<endl;
     }
 }
