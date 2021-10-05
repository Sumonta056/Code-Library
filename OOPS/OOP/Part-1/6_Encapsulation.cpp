#include <iostream>
using namespace std;

class Employee
{
private:
    // Private attribute
    int salary;

public:
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }
    // Getter
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}
/*
The salary attribute is private, which have restricted access.

The public setSalary() method takes a parameter (s) and
 assigns it to the salary attribute (salary = s).

The public getSalary() method returns the value of the private salary attribute.

Inside main(), we create an object of the Employee class.
Now we can use the setSalary() method to set the value of the private attribute to 50000. 
Then we call the getSalary() method on the object to return the value.
*/
