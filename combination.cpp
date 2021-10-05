#include <iostream>
using namespace std;
int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
int main() {
   int n, r, comb, per;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"\nEnter r : ";
   cin>>r;
   comb = fact(n) / (fact(r) * fact(n-r));
   cout << "\nCombination : " << comb;
   per = fact(n) / fact(n-r);
   cout << "\nPermutation : " << per;
   return 0;
}