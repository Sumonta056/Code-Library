
#include<iostream>
using namespace std;

int main()
{
    double base,height,vp,area1,area2;

    cout<<"Enter base : ";
    cin>>base;

    cout<<"Enter height : ";
    cin>>height;

    cout<<"Enter vertical height : ";
    cin>>vp;

    area1 = 1/2 * (base + height) *vp;//1?2 is interger
    area2 = (double) 1/2 * (base + height) *vp;

cout<<"The area of traingle : "<<area1<<endl;
;

cout<<"The area of traingle : "<<area2<<endl;
}
