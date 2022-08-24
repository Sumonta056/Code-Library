class Solution {
public:
      int numIdenticalPairs(vector<int>& A) {
        int res = 0;
        unordered_map<int, int> count;
        for (int a: A) {
            res += count[a]++;
            //cout << res << endl;
        }
        return res;
    }
};


Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.


[1,2,3,1,1,3]

0
0
0
1
3
4

ans = 4