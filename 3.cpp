#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int best = 1, curr = 1;
    int n = s.size();
    
    for(int i=1;i<n;i++){
      if(s[i] == s[i-1]){
        curr++;
        best = max(best, curr);
      }
      else curr = 1;
    }
    cout << best << endl;
    
    return 0;
}
