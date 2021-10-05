#include<iostream>
using namespace std ;

 struct swe_19
 {
     string name;
     int reg_no;
     int p_solve;
     float cgpa;


 };
void sortswe ( swe_19 student1[] , int size1 );

void inputswe (swe_19 student2[] ,  int size2 );

void outputswe (swe_19 student3[] ,  int size3 );

 int main()
 {
    int n;  cin>>n;

    swe_19 p[n];


    inputswe( p , n);

    sortswe (p, n );

    outputswe(p , n);


 }

void inputswe (swe_19 student2[] ,  int size2 )
{
    for(int i=0 ; i<size2 ; i++)
    {
        cin>>student2[i].name;
         cin>>student2[i].reg_no;
          cin>>student2[i].p_solve;
           cin>>student2[i].cgpa;
    }
}

void sortswe ( swe_19 student1[] , int size1 )
{
    bool swapped;

    do
    {
        swapped=false ;

        for(int i = 0 ; i<size1-1 ; i++)
        {
            if(student1[i].p_solve < student1[i+1].p_solve)
            {
                swap(student1[i], student1[i+1]);
                swapped=true;

            }
        }
    }while(swapped);
}

void outputswe (swe_19 student3[] ,  int size3 )
{
     for(int i=0 ; i<size3 ; i++)
    {
    cout<<student3[i].name<<" "<<student3[i].reg_no<<" "<<student3[i].p_solve<<" "<<student3[i].cgpa<<endl;
    }
}
