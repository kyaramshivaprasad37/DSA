#include <iostream>
using namespace std;

void fun(int l, int h, int a[]) {
    if (l >= h) {
        return;
    }
    int temp = a[l];
    a[l] = a[h];
    a[h] = temp;
    fun(l + 1, h - 1, a);
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int l = 0;
    int h = (sizeof(a) / sizeof(a[0])) - 1;
    fun(l, h, a);
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
