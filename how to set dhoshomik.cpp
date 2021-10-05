#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
    a=10;
    b=3;

    int sum=a/b;
    cout<<sum<<endl;

    double sum1=a/b;
    cout<<sum1<<endl;
    // interger /interger ans will be interger'

   double sum2=(float)a/b;
    //type casting
    cout<<sum2<<endl;


    cout<<setprecision(3);
     double sum4=(float)a/b;
    cout<<sum4<<endl;


    cout<<fixed;
    cout<<setprecision(4);
     double sum3=(float)a/b;
    cout<<sum3<<endl;






    cout<<showpoint;
    int sum5=a+b;
    cout<<setw(20)<<"Sum is :"<<sum5<<endl;
int d;
d=a-b;
cout<<setw(20)<<"Subtraction is :"<<d<<endl;
}
