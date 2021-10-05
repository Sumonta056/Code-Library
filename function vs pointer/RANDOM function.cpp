//These function genetrates auto number
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{


    for(int i=1; i<=5 ; i++)
    {
        int n;
        n=rand();
        cout<<n<<endl;
    }
    //if u want to generate random number in a particlur range
    //0 to 6
       for(int i=1; i<=7 ; i++)
    {
        int m;
        m=rand()%7;
        cout<<m<<endl;
    }
 // 1 to 7
   for(int i=1; i<=7 ; i++)
    {
        int p;
        p=rand()%7+1;
        cout<<p<<endl;
    }

}
