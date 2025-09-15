#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> st;
    
    while(n--){
      int k;
      cin >> k; 
      st.insert(k);
    }
    
    cout << st.size() << endl;
    
    return 0;
}
