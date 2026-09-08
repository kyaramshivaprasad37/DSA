#include <bits/stdc++.h>
using namespace std;

// code_start

class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        unordered_set<int> unique;
        int i = 0;
        for (int num : nums) {
            if (unique.find(num) == unique.end()) {
                unique.insert(num);
                nums[i] = num;
                i++;
            }
        }
        return i;
    }
};

// code_end
