// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> a{8, 2, 4, 5, 6, 7, 1};
//     int l = a.size();
//     for (int i = 1; i < l + 1; i++) {
//         bool flag = false;
//         for (int j = 0; j < l; j++) {
//             if (a[j] == i) {
//                 flag = true;
//                 break;
//             }
//         }
//         if (!flag) {
//             cout << i << ' ';
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> a{2, 3, 4, 5};
//     int l = a.size();
//     int sum = ((l + 1) * (l + 2)) / 2;
//     int sum1 = 0;
//     for (int i = 0; i < l; i++) {
//         sum1 += a[i];
//     }
//     cout << sum - sum1 << '\n';
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a{8, 2, 4, 3, 6, 7, 1};
    int l = a.size();
    int m = a[0];
    for (int i = 0; i < l; i++) {
        if (a[i] >= m) {
            m = a[i];
        }
    }
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 1; i <= m; i++) {
        xor1 ^= i;
    }
    for (int i = 0; i < l; i++) {
        xor2 ^= a[i];
    }

    cout << (xor1 ^ xor2) << '\n';

    return 0;
}
