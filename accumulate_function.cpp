long long sum = accumulate(a.begin(), a.end(), 0LL);

// * sum of whole array

// accumulate example
#include <iostream>     // std::cout
#include <functional>   // std::minus
#include <numeric>      // std::accumulate

int myfunction (int x, int y) {return x+2*y;}
struct myclass {
	int operator()(int x, int y) {return x+3*y;}
} myobject;

int main () {
  int init = 100;
  int numbers[] = {10,20,30};

  std::cout << "using default accumulate: ";
  std::cout << std::accumulate(numbers,numbers+3,init);
  std::cout << '\n';

  std::cout << "using functional's minus: ";
  std::cout << std::accumulate (numbers, numbers+3, init, std::minus<int>());
  std::cout << '\n';

  std::cout << "using custom function: ";
  std::cout << std::accumulate (numbers, numbers+3, init, myfunction);
  std::cout << '\n';

  std::cout << "using custom object: ";
  std::cout << std::accumulate (numbers, numbers+3, init, myobject);
  std::cout << '\n';

  return 0;
}


using default accumulate: 160
using functional's minus: 40
using custom function: 220
using custom object: 280