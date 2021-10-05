#include<iostream>
using namespace std;
//declaring a class
class student
{
public :
    int id;
    double gpa;

    // adding a function
    void print()
    {
        cout<<id<<" " <<gpa<<endl;
    }

    int scan(int a , double b)
    {
        cin>>a>>b;
        id=a;
        gpa=b;
    }
};


int main()
{
    int c;
    double d;
    student mridul , alim;
    alim.scan(c,d);
    alim.print();


    mridul.scan(c,d);
    mridul.print();
}
