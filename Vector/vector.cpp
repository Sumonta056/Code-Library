#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;
int  main()
{
    vector <int> vec;
    vector <int>::iterator it;

    for(int i = 0 ; i<=10 ; i++)
    {
        int n;
        cin>>n;

        vec.push_back(n);
    }

    sort(vec.begin() , vec.end() );
    reverse(vec.begin() , vec.end() );

   for(it = vec.begin()   ; it !=vec.end() ; it++)
   {
       cout<<*it<< " ";

          }

}
