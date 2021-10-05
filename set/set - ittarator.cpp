
#include<iostream>
#include<string>
#include<set>
#include<iterator>
using namespace std;
int main()
{

    set<int>name ;

    set<int>::iterator p ;

    name.insert(5) ;
    name.insert (6);
    name.insert (2);

    // you  can not insert same number

    for(p=name.begin() ; p!= name.end() ; p++)
    {
        cout<<*p<<" ";
    }


}
