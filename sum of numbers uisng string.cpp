#include<iostream>
using namespace std ;
int main()
{
    string num1, num2;

    cin>>num1>>num2;

    long long int len,i,j,s,carry=0;
    len=num1.length();

    char sum[len+1];
     j=len;

    for(i=len-1; i>=0 ; i-- )
    {
        s=(num1[i]-'0') + (num2[i]-'0') + carry;

        carry=s/10;

        sum[j]=(s%10) + '0';
        j--;
    }
    sum[j]=carry+ '0';


    cout<<sum;
}
