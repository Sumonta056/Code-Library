#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int t;
 cin>>t;
 int arr[t];
 vector<int > v;
 for(int i=0 ; i<t ; i++)
 {
     cin>>arr[i];
     v.push_back(arr[i]);
 }
 sort(v.begin(),v.end());
 int k=(int)v.size();
 for(int i=0 ; i<k ; i++)
 {
     cout<<v[i]<<endl;
 }

}
