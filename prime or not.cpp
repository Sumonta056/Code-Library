#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    long long int t ,i;
    cin>>t;

    vector<int> arr(t);

    for(i = 0 ; i<t ; i++)
    {
        cin>>arr[i];

    long long int m,d=0;

    m=arr[i];
       while(m<=arr[i])
        {

            if(m==1) d=1;
            for(int i = 2 ; i<m ; i++)
            {
                if(m%i==0)
                {
                    d=1;
                    break;
                }

            }
            m++;

        }


  if(d==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

    }

}
