#include<iostream>
using namespace std ;

class student
{
   public : // not ;
    int id;
    double cgpa;
    string s;

    void display()
    {
        cout<<s<<" "<<id<<" "<<cgpa<<endl;
    }

    student(int x , double y , string z)
    {
        id=x;
        cgpa=y;
        s=z;

    }



};

int main()
{
  student p (56,4.00,"mridul");
  p.display();

}
