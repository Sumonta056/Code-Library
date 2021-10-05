#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


struct software
{
   char name[10];
    int reg;
    int p_solve;
    double cgpa;
};
void sortarray( software l[] , int t);

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
/*
   for (int i = 1; i < n; i++)
      for (int j = 0; j < n - i; j++) {
         if (strcmp(p[j].name, p[j + 1].name) > 0) {
            temp = p[j];
            p[j] = p[j + 1];
            p[j + 1] = temp;
         }
      }*/


    sortarray(p,n);


    for(int i = 0 ; i<n ;i++)
   {
       cout<<p[i].name<<" "<<p[i].reg<<" "<<p[i].p_solve<<" "<<p[i].cgpa<<endl;

   }

}
void sortarray ( software l[] , int t)

{
     bool swapped;
     do
     {
         swapped=false;
         for ( int count1=0 ; count1<t-1 ; count1++)
         {
             if(l[count1].p_solve > l[count1+1].p_solve  )
             {
                 swap(l[count1] , l[count1+1] );
                 swapped=true;
             }
         }
     }while(swapped);
}

