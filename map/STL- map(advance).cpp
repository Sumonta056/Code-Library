#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    long int n , m;
    string s;
    cin>>n;
        cin.ignore();
    map< string,long int> arr;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>s;
        cin>>m;

        arr[s] = m;
    }
    while(cin>>s)
    {
        if(arr.find(s)!= arr.end())
            // arr.end() actually is a null value..if it doesnot find any thin it will match null value


        cout<<s<<" "<<arr.find(s)->second<<endl;
        else cout<<"Not found"<<endl;
    }

}
