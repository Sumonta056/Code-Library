#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
   vector<int> v = {1, 3, 3, 3, 3};
   int cnt;

   cnt = count(v.begin(), v.end(), 3);

   cout << "Number 3 occurs " << cnt << " times." << endl;

  