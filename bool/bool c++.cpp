#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    bool i = false ; // standard bool variable

    if(n%2==0) i=true;

   if(i==0) cout<<"No"; // only 0 defines false
   else cout<<"yes"<<endl
    ;
}
