#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int n;
    n=a+b;

    return n;
}
//recursion
int sumfinder ( int i)
{
    if(i==1 ) return 1; //base case for stop the recursion

    else // to continue the recursion
    {
        return i+sumfinder(i-1);
    }
}






int main()
{


    


    int  x,y ;

    cin>>x>>y;

    int p=sum(x,y);

    cout<<sumfinder(p)<<endl;
}
