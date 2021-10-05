#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iterator>
using namespace std;


int main() {
vector <long int> n;
vector < long int>::iterator it;
long int x,i,a,b,s;
cin>>x;


for(i=0 ; i<x ; i++)
{
    long int c;
    cin>>c;
    n.push_back(c);
}
cin>>s;
s=s-1;
n.erase(n.begin()+s);
cin>>a>>b;

a=a-1;
b=b-1;
n.erase(n.begin()+a , n.begin()+b);

cout<<n.size() <<endl;
  for(it = n.begin()   ; it !=n.end() ; it++)
   {
       cout<<*it<< " ";

   }
}
