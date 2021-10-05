#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d=0,d1;
    for(int i = 2 ; i<n ; i++)
    {
      if (n%i!=0) d1=0;
      if(n%i==0) d1=1;
      d=d+d1;
    }
    if(d==0) cout<<"prime number";
    else cout<<"not prime number";
}
