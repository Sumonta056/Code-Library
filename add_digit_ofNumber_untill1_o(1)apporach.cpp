Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

The O(1) approach says :

Check if the number is 0 or not . If num==0 , return 0. Else do the following.
Check if (num%9)==0 . If it is true , return 9. Else return (num%9).
This is the answer.

CODE :
class Solution {
public:
    int addDigits(int num) {
      if(num==0)
          return 0;
      else if(num%9==0)
          return 9;
      else
          return num%9;
    }
};