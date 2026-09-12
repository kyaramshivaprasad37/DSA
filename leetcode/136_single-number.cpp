#include <bits/stdc++.h>

// code_start

class Solution {
  public:
    int singleNumber(vector<int> &a) {
        int l = a.size();
        int x = 0;
        for (int i = 0; i < l; i++) {
            x = x ^ a[i];
        }
        return x;
    }
};

// code_end
