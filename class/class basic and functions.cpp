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



};



int main()
{
    int n ;
    cin>>n;
    student p[n];

    for(int i = 0 ; i <n ; i++)
    {
        int id1;
        double cgpa1;
        string s1;
        cin>>id1>>cgpa1>>s1;

        p[i].s=s1;
        p[i].id=id1;
        p[i].cgpa=cgpa1;
    }


     for(int i = 0 ; i <n ; i++)
    {
       p[i].display();
    }

}
