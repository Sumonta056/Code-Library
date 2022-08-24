void assign (size_type n, const value_type& val);

Parameters
n − Size of vector.

val − Value for each element.


#include <iostream>
#include <vector>

using namespace std;

int main(void) {
   vector<int> v1;

   cout << "Initial size  = " << v1.size() << endl;

   /* 5 integers with value = 100 */
   v1.assign(5, 100);

   cout << "Modified size = " << v1.size() << endl;

   /* display vector values */
   for (int i = 0; i < v1.size(); ++i)
      cout << v1[i] << endl;

   return 0;
}