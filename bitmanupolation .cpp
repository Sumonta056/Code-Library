#include<iostream>
using namespace std ;
int main()
{
    // computer automatically convert any decimal digit into binary
    // for easier we can easily do programming with those binary operations..

    //OR sign |
    int a1=3; //011
    int a2=2; //010
    int sum;
    sum=a1|a2;
    // IF any of the is 1 the output is 1
    //otherwise 0
    cout<<sum<<endl;



    //AND sign &
    int a4=3; //011
    int a3=2; //010
    int sum1;
    sum1=a4&a3;
    // IF both of the is 1 the output is 1
    //otherwise 0
    cout<<sum1<<endl;


    //not sign ~
    int a7=3; //011
    int sum7;
    sum7=~a7;
    // it will convert
    cout<<(-1)*sum7<<endl;


    int p;
    p=3<<2;
    cout<<p<<endl;

    //p=n<<(left shift)k;
    //formula is like p=n* pow(2,k);
    //3 is 00000011 if k =1 the rotation be like 00000110=6
    //if k=2 rotation be like 00001100=12


    int p1;
    p1=4>>2;
    cout<<p1;
     //p=n>>(right shift)k;
    //formula is like p=n / pow(2,k);
    //4 is 00000100 if k =1 the rotation be like 00000010=2
    //if k=2 rotation be like 00000001=1




}
