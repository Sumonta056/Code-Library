#include <iostream>
using namespace std;
int findNthSeriesElement(int N) {
   int series[N+1];
   series[1] = 4;
   series[2] = 7;
   for (int i=3; i<=N; i++) {
      if (i%2 != 0)
         series[i] = series[i/2]*10 + 4;
      else
         series[i] = series[(i/2)-1]*10 + 7;
   }
   return series[N];
}
int main() {
   int N = 9;
   cout<<"The "<<N<<"th element of the array is "<<findNthSeriesElement(N);
   return 0;
}