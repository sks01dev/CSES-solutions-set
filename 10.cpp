#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; 
    cin >> n;
    ll ans = 0;

    // Each multiple of 5 adds one trailing zero,
    // each multiple of 25 adds an extra, and so on.
    for (ll p = 5; p <= n; p *= 5)
        ans += n / p;

    cout << ans << "\n";
    return 0;
}
