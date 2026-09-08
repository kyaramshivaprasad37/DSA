#include <iostream>
using namespace std;

int fun(int x) {
    if (x == 0) {
        return 1;
    }
    return x * fun(x - 1);
}

int main() {
    int n{3};
    cout << fun(n);
    return 0;
}
