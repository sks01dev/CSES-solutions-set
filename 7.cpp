#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll total=0, attackPos=0, ans=0;
    
    for(int i=1;i<=n;i++){
      ll k = i;
      total = (k*k * (k*k - 1)) / 2;
      attackPos = 4 * (k-1) * (k-2);
      ans = total - attackPos;
      cout << ans << "\n";
    }
    
    return 0;
}
