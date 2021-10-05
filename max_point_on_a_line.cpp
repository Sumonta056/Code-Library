#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
class Solution {
   public:
   int maxPoints(vector<vector<int>>& points) {
      int n = points.size();
      if(n<3)return n;
      int ans = 2;
      for(int i = 1;i<n;i++){
         int count = 0;
         lli x1 = points[i-1][0];
         lli x2 = points[i][0];
         lli y1 = points[i-1][1];
         lli y2 = points[i][1];
         if(x1 == x2 && y1 == y2){
            for(int j =0;j<n;j++){
               if(points[j][0] ==x1 && points[j][1] == y1)count++;
            }
         } else {
            for(int j =0;j<n;j++){
               int x3 = points[j][0];
               int y3 = points[j][1];
               if((y3-y2)*(x2-x1) == (y2-y1)*(x3-x2))count++ ;
            }
         }
         ans = max(ans, count);
      }
      return ans;
   }
};
main(){
   Solution ob;
   vector<vector<int>> v = {{1,1},{3,2},{5,3},{4,1},{2,3},{1,4}};
   cout << (ob.maxPoints(v));
}