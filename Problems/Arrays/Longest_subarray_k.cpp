#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int fun(vector<int> a, int k) {
        int n = a.size();
        int s, e;
        bool is = false;
        int maxlen{};
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += a[j];
                if (sum == k) {
                    s = i;
                    e = j;
                    is = true;
                    int len = e - s;
                    if (maxlen < len) {
                        maxlen = len;
                    }
                }
            }
        }
        if (is) {
            return maxlen + 1;
        } else {
            return 0;
        }
    }
};

int main() {
    Solution s;
    int k;
    cin >> k;
    vector<int> a{-1, 1, 1};
    cout << s.fun(a, k);
    return 0;
}
