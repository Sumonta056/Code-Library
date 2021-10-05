#include<iostream>
using namespace std;
//void function
//Doesn't return value
//use for direct output or use

void addition( int a , int b)
{
    int sum;
    sum=a+b;
    cout<<"Sum : "<<sum<<endl;
}


int main()
{
    int x,y;
    cout<<"Enter Two number : ";
    cin>>x>>y;

    addition(x,y);
}
