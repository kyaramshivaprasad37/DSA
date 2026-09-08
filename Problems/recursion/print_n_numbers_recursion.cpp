#include <iostream>
using namespace std;

int fun(int x) {
    if (x == 0) {
        return 0;
    }
    cout << x << ' ';
    return fun(x - 1);
}

int main() {
    int n{10};
    fun(n);
    return 0;
}
