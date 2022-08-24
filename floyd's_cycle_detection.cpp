A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

Example 1:

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

Surprisingly, we can apply the Floyd Cycle Detection (the one we used in Detect Linked List Cycle) on this problem: think of what is a cycle in this case:

from a number A, we can get to another B using the ways given in this case
from number B, when we doing the transformation, we will eventually get back to B again ---> this forms a cycle (infinite loop)

for example:
1^2 + 1^2 = 2
2^2 = 4 ------> notice that from here we are starting with 4
4^2 = 16
1^2 + 6^2 = 37
3^2 + 7^2 = 58
5^2 + 8^2 = 89
8^2 + 9^2 = 145
1^2 + 4^2 + 5^2 = 42
4^2 + 2^2 = 20
2^2 + 0^2 = 4 -------> notice that we just get back to 4 again

Using Floyd Cycle Detection algorithm (fast and slow pointer), we will be able to actually get the value of B. Then the rest of task would be very simple, we simply check whether this value will be 1 or not.

You may ask: what if value "1" also appears in the cycle and we are skipping over it. Well, in that case, the value that slow and fast are equal to will be 1, as transformation of 1 is still 1, so we still cover this case.

Floyd's cycle detection algorithm is a pointer algorithm that uses only two pointers, which move through the sequence at different speeds. Obviously, if there is a loop, they will meet in the loop. It is also called the "tortoise and the hare algorithm"

https://leetcode.com/problems/happy-number/solution/

class Solution {
public:
    int digitSquareSum(int n) {
    int sum = 0, tmp;
    while (n) {
        tmp = n % 10;
        sum += tmp * tmp;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow, fast;
    slow = fast = n;
    do {
        cout << slow << endl;
        slow = digitSquareSum(slow);
        cout << fast << endl;
        fast = digitSquareSum(fast);
        cout << fast << endl;
        fast = digitSquareSum(fast);
        
        cout << slow << " " <<fast << endl;
        
    } while(slow != fast);
    if (slow == 1) return 1;
    else return 0;
}
};