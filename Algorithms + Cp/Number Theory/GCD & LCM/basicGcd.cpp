#include <bits/stdc++.h>
using namespace std;

/*
pseudo code for above approach:

 * def gcd(a, b):
 if a == b:
 return a
 if a > b:
 gcd(a – b, b)
 else:
 gcd(a, b – a)

At some point one number becomes factor of the other so instead of repeatedly subtracting till
both become equal , we check if it is factor of the other .

For Example  suppose a=98 & b=56  a>b so put a= a-b and b remains same. So  a=98-56=42  & b= 56 .
Since b>a, we check if b%a==0. since answer is no we proceed further.
Now b>a  so  b=b-a and  a remains same.
So b= 56-42 = 14 & a= 42   . Since a>b, we check if a%b==0 . Now answer is yes
So we print smaller among  a and b as H.C.F . i.e. 42 is  3 times of 14  so HCF is 14  .

likewise  when a=36  & b=60  ,here b>a  so b = 24 & a= 36 but a%b!=0.
Now a>b so a= 12 & b= 24  . and b%a==0. smaller among a and b is 12  which becomes  HCF of 36 and 60 .
*/

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

// Driver program to test above function
int main()
{
    int a = 98, b = 56;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
    return 0;
}