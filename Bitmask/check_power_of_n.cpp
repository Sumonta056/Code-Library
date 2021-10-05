#include <bits/stdc++.h>
using namespace std;
#define bool int
 
/* Function to check if x is power of 2*/
int isPowerOfTwo (int x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
    /*
       Let the no n =16

    Binary representation of 16 is 
        16  =  0 0 0 1 0 0 0 0
        16-1=  0 0 0 0 1 1 1 1
        ----------------------------
    Now 16 AND 15=  0 0 0 0 0 0 0 0

    Hence , 16 is the power of 2

    But what in case if it is not:

    Let the no n=15
        15 =  0 0 0 0 1 1 1 1    
        14 =  0 0 0 0 1 1 1 0
        ----------------------------
    15 AND 14=  0 0 0 0 1 1 1 1

    So 15 is not the power of 2.
    */
}
 
/*Driver code*/
int main()
{
    isPowerOfTwo(31)? cout<<"Yes\n": cout<<"No\n";
    isPowerOfTwo(64)? cout<<"Yes\n": cout<<"No\n";
    return 0;
}
 
// This code is contributed by rathbhupendra