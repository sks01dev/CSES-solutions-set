#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; // use long long because numbers can grow large
    cin >> n;

    while (true) {
        cout << n << " ";
        if (n == 1) break;
        if (n % 2 == 0) n /= 2;
        else n = 3*n + 1;
    }
    return 0;
}
