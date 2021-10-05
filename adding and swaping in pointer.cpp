

#include<iostream>
using namespace std;

int main()
{
   int x=10, y=45;
   int *p1, *p2;

   p1=&x;
   p2=&y;

   int sum=*p1+*p2;

   cout<<sum<<endl;


   //swaping

   int temp;
   temp=*p1;
   *p1=*p2;
   *p2=temp;

   cout<<x<<y<<endl;

}
