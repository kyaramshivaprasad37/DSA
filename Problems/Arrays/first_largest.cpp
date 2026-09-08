#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 3, 5, 1, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    cout << max << '\n';
    return 0;
}
