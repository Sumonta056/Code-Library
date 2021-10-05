
#include<iostream>
using namespace std;

int main()
{
    int x[5]={1,2,3,4,5};

    int *p;

    p=&x[0];

    for(int i=0 ; i<5 ;i++)
    {
        cout<<*p<<endl;
        p++;
    }

}
