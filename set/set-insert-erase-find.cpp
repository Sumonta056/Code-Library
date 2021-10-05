#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    long long int q,i,y,p;
    cin>>q;

    set<long long int> s;
    set<long long int>::iterator it;

    for(i=0 ; i<q ; i++)
    {
        cin>>y;
        if(y==1)
        {
            cin>>p;
            s.insert(p); //Inserts an integer x into the set s

        }
        else if(y==2)
        {
           cin>>p;
           s.erase(p); //Erases an integer val from the set s.
        }
        else
        {
            cin>>p;
            it=s.find(p);
            if(it!=s.end()) cout<<"Yes";
            else cout<<"No";
            cout<<endl;
            //finding element

            /*
            set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
            Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().

            */
        }
    }
}


