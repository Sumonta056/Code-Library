#include<iostream>
using namespace std;

void arraye(int *p)
{
    *p=20;
}


int main()
{
    int n;
    cin>>n;



   arraye(&n);
  cout<<n<<endl;
}
