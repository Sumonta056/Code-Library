#include<iostream>
using namespace std;

int main()
{
    int arr[10];


    for(int i=0 ; i<10 ;i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];
    int  min=arr[0];

    for(int  i =1; i<10; i++)
    {
        if(max <arr[i]) max=arr[i];
        if(min >arr[i]) min=arr[i];
    }

    cout<<"Maximum number is :" << max<<endl;
    cout<<"Minimum number is :" << min<<endl;
}
