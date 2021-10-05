
#include<iostream>
using  namespace std;

int main()
{


    int arr[]={10,15,6,8,9};
   int n,pos=-1;
   cin>>n;

    for(int i=0 ; i<5 ;i++)
    {
       if(arr[i]==n){
        pos=i+1;
        break;
       }

    }
if(pos==-1) cout<<"NOT FOUND" ;
else cout<<"FOUND! POSITION IS : "<<pos;
}
