/*
In C++, it is possible to inherit attributes and methods from one class to another. 
We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.

*A class can also be derived from more than one base class, using a comma-separated list:
*/
#include <iostream>
using namespace std;

// Base class
class MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class.";
    }
};

// Another base class
class MyOtherClass
{
public:
    void myOtherFunction()
    {
        cout << "Some content in another class.";
    }
};

// Derived class
class MyChildClass : public MyClass, public MyOtherClass
{
};

int main()
{
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}