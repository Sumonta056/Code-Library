
#include<iostream>
#include<string>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>name ;

    set<int>::iterator p ;

   for(int i =1 ; i<=n ; i++)
   {
       int k;
       cin>>k;

       name.insert(k);
   }



    for(p=name.begin() ; p!= name.end() ; p++)
    {
        cout<<*p<<" ";
    }


}
