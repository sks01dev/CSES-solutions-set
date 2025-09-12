#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    
    while(n--){
      ll a, b;
      cin >> a >> b;
      
      if((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b)){
        cout << "YES\n";
      }
      else{
        cout << "NO\n";
      }
    }
    
    return 0;
}
