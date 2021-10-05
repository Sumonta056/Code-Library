#include<iostream>
using namespace std;
int main()
{
int n,p;
cin>>n>>p;


bool sum=true;

for(int i =1 ; i<=n ; i++){

    if(i==p) sum=false;
}
if(sum==true) cout<<"you have nothing";
else cout<<"you have one";

}
