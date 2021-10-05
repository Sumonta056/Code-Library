
#include<iostream>
#include<math.h>
using namespace std;

int main()
{

    //root always double type
    double n=49;
    cout<<sqrt(n)<<endl;

    //power
    //5 to the power 2
    double x =pow(5,2);
    cout<<x<<endl;

    //log use

    double y=log(10.5), z=log10(7);
    cout<<y<<z<<endl;


    double c=cos(45);
    cout<<c<<endl;

    //use of round
    //5.3 as .3 is less then .5 it will show 5
    //5.8 as .8 is more then .5 it will show 6
    double p=5.3 , o=5.56;
    cout<<round(p)<<" "<<round(o)<<endl;

    //use of trunc
    //5.56465 will be 5
    //0.2122 will be 0
    double g=7.9898;
    cout<<trunc(g)<<endl;

    //ceil vs floor
    // 2.9 in celi will be 3 and floor will be 2
    // 2.1 in celi will be 3 and floor will be 2
    double j=2.9l, u=2.2;
    cout<<ceil(j)<<" "<< floor(j)<<endl;
    cout<<ceil(u)<<" "<< floor(u)<<endl;


    }
