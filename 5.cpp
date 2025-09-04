#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    if(n == 1) cout << 1;
    
    else if(n == 2 || n == 3) cout << "NO SOLUTION";
    
    else{
      // for even numbers
      for(int i=1;i<=n;i++){
        if(i%2 == 0) cout << i << " ";
      }
      // for odd numbers
      for(int i=1;i<=n;i++){
        if(i%2 == 1) cout << i << " ";
      }
    }
    cout << "\n";
    return 0;
}
