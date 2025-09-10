#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

ll power(ll base, ll e) {
    ll res = 1;
    while (e > 0) {
        if (e & 1) res = res * base % MOD; // if current bit is 1, take that power of 2
        base = base * base % MOD;                // square the base
        e >>= 1;                        // move to next bit
    }
    return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
    
  cout << power(2, n);
  return 0;
}

