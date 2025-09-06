#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    while(n--){
      ll row, col;
      cin >> row >> col;
      
      ll k = max(row, col);
      ll ans;
      // using formulas
      // even
      if (k % 2 == 0) {
            if (row == k) ans = k * k - (col - 1);
            else ans = (k - 1) * (long long)(k - 1) + row;
      } 
      // odd
      else {
            if (col == k) ans = k * k - (row - 1);
            else ans = (k - 1) * (long long)(k - 1) + col;
      }
      cout << ans << endl;
    }
}
