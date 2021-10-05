#include<iostream>
using namespace std;

int addition(int a, int b)
{
    int  sum=a+b;
    return sum;
}

 int main()
 {
     int x,y;
     cin>>x>>y;

     int add = addition(x,y);
     cout<<add;
 }
