#include<bits/stdc++.h>
using namespace std;
void Sieve()
{
    int i,j,flag[100005];
    for(i=2;i<=100000;i++)
    {
        if(flag[i]==0)
        {
            for( j=i*2;j<=100000;j=i+j)
            {
                flag[j]=1;
            }
        }
    }
}
int main()
{
    bool flag[100005];
    int prime [100005];
    int pcount = 0;
    Sieve();
}