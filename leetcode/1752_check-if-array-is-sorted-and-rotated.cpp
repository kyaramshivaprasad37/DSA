#include <bits/stdc++.h>
using namespace std;
// code_start

class Solution {
  public:
    bool check(vector<int> &nums) {
        int l = nums.size();
        int count = 0;
        for (int i = 0; i < l; i++) {
            if (nums[i] > nums[(i + 1) % l]) {
                count++;
            }
        }
        if (count > 1) {
            return false;
        }
        return true;
    }
};

// code_end
