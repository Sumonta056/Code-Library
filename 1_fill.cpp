#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
   vector<int> v(5);

   fill(v.begin(), v.end(), 1);

   cout << "Vector contains following elements" << endl;

   for (auto it = v.begin(); it != v.end(); ++it)
      cout << *it << endl;

   return 0;
}