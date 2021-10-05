
#include<iostream>
using namespace std;
//function main function r niche hoile aga prototype declare korte hobe

void addition(int,int);

int main()
{
    int x,y;
    cout<<"Enter Two number : ";
    cin>>x>>y;

    addition(x,y);
}
 void addition( int a , int b)
{
    int sum;
    sum=a+b;
    cout<<"Sum : "<<sum<<endl;
}
