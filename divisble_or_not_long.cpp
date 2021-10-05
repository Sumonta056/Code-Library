#include<bits/stdc++.h>
using namespace std;

int main()            
{
    int T;
    scanf("%d",&T);

    for(int t=1;t<=T;t++){
        string a;
        cin >> a;
        long long int b;
        scanf("%lld",&b);
        b = abs(b);
        long long int mod = 0;
        long long int sz = a.size();
        int i=0;
        if(a[0] == '-') i=1;
        
        for( ;i<sz;i++){
            mod = mod*10+a[i]-'0';
            mod = mod%b;
        }
            
        if(mod == 0)  printf("Case %d : divisible\n",t);
        else        printf("Case %d : not divisible\n",t);
    }

    return 0;
}