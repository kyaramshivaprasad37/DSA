#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 1, 8, 4, 5, 6};
    int ele{5};
    int l = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < l; i++) {
        if (a[i] == ele) {
            cout << i;
        }
    }

    return 0;
}
