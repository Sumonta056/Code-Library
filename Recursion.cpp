// to call a function a continously
// must a  have a  basic case to stop the function

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1) return 1;
    else
    {
        return n * fact(n-1);
    }
}
int main()
{
    int i;
    cout<<"Enter a number : " ;
    cin>>i;

    int  factorial = fact(i);

    cout<<"Factorial is : "<<factorial<<endl;
}
