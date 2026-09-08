#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 4, 8, 1, 4, 10, 11};
    int n = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    int sec;
    for (int i = 0; i < n; i++) {
        for (int j = 1; i < n; i++) {
            sec = max;
            if (a[i] > a[j]) {
                max = a[i];
            }
        }
    }
    cout << "Second largest Element: " << sec << '\n';
    cout << "Largest Element: " << max << '\n';
    return 0;
}
