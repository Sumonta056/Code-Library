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
};


int main()
{
    // declaring  objects of class
    student mridul , alim;
    alim.id=7089;
    alim.gpa=3.00;
    alim.print();

    mridul.id=7090;
    mridul.gpa=4.00;
    mridul.print();
}
