#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for( int i =1 ; i<=t ;i++)
    {
      long long int n,sum=0;
      cin>>n;
         ostringstream l;
      l<<n;
      string s;
      s=l.str();
      int u;
      u=s.length();
      for(int p=0 ; p<u ;p++)
      {
          //convert char to interger datatype
          char k;
          k=s[p];
          int x;
          x=(int)k;
          x=x-48;
                  sum=sum+x;
      }
      cout<<sum<<endl;
    }
}

