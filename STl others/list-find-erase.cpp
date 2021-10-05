#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    list<int> p (arr , arr+10);

    list<int> ::iterator it  ;

// it=find(p.begin() , p.end() , 5);
// p.insert(it,50);
// p.erase(it);




    for(it=p.begin() ; it!=p.end() ; it++)
    {

        if(*it%2==0)
        cout<<*it<<" ";
    }

}
