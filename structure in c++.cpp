#include<iostream>
#include<algorithm>
using namespace std;

struct software
{
   string name;
    int reg;
    int p_solve;
    double cgpa;
};


int main()
{
   int n;
   cin>>n;


   software p[n];


   for(int i = 0 ; i<n ;i++)
   {
       cin>>p[i].name;
       cin>>p[i].reg;
       cin>>p[i].p_solve;
       cin>>p[i].cgpa;

   }
   sort(p.reg.begin() , p.reg.end())

    for(int i = 0 ; i<n ;i++)
   {
       cout<<p[i].name<<" "<<p[i].reg<<" "<<p[i].p_solve<<" "<<p[i].cgpa<<endl;

   }

}
