#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x = 0.5, result;

  result = cos(x);
  cout << "cos(x) = " << result << endl;

  double xDegrees = 25;

  // converting degrees to radians
  x = xDegrees*3.14159/180;
  result = cos(x);

  cout << "cos(x) = " << result << endl;

  return 0;
}
