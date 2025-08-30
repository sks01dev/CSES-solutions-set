#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long total_sum = 1LL * n * (n + 1) / 2;  
    long long array_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        array_sum += x;
    }

    cout << (total_sum - array_sum) << "\n";
    return 0;
}
