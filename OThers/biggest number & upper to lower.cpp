#include<iostream>

using namespace std;
 int main()
 {
      int a,b,c,d;
      cout<< "Enter four numbers : ";
      cin>> a>>b>>c>>d;
   int large;

      if(a>b && a>c && a>d)
        large=a;

     else if(a<b && b>c && b>d)
        large=b;

   else if(c>b && a<c && c>d)
        large=c;

   else large=d;


   cout<<large<< " is the largest number"<<endl;

 char ch1,ch2;
 cout<< "Enter two letter ";
 cin>> ch1>>ch2;
 ch1=toupper(ch1);
 ch2=tolower(ch2);

 cout<<ch1<<endl<<ch2;


 }
