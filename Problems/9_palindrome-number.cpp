

// code_start

class Solution {
  public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long rev = 0;
        int original = x;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x = x / 10;
            if (rev > INT_MAX || rev < INT_MIN) {
                break;
            }
        }
        if (int(rev) == original) {
            return true;
        } else {
            return false;
        }
    }
};

// code_end
