#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int ele, index;
    cout << "Enter the element and index to insert" << '\n';
    cin >> ele >> index;
    for (int i = n - 1; i >= index; i--) {
        a[i + 1] = a[i];
    }
    a[index] = ele;
    n++;
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}
