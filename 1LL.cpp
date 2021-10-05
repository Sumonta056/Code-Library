
// A program shows problem if we
// don't use 1ll or 1LL
#include <iostream>
using namespace std;
int main()
{
    int x = 1000000;
    int y = 1000000;
  
    // This causes overflow even
    // if z is long long int
    long long int z = x*y;
    cout << z;
    // * Output: -727379968

    // ? for solving these problem we use 1LL
    
    long long int z = 1LL*x*y;
    cout << z;
     // * Output: 1000000000000

    
    return 0;
}