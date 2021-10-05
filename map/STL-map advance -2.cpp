#include<iostream>
#include<map>
using namespace std;
int main()
{
    long int q;
    cin>>q;
    map<string,int> x;

    for(long int i = 0 ; i < q ; i++)
    {
        int type;
        cin>>type;
        string s;
        int m;

            if(type==1)
        {
            cin>>s>>m;
            if(x.find(s)!= x.end())
               {
                   int p;
                   p= x.find(s)->second + m ;
                   x.erase(s);
                   x.insert(make_pair(s,p));

               }
            else x[s]=m;
        }


        else if(type==2)
        {
            cin>>s;
            if(x.find(s)!= x.end())
               {

                   x.erase(s);
                   x.insert(make_pair(s,0));

               }

        }
        else
        {
            cin>>s;
            cout<<x.find(s)->second<<endl;
        }
    }

}
