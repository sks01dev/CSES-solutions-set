#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end()); // start with smallest lexicographic
    vector<string> res;
    
    do {
        res.push_back(s);
    } while (next_permutation(s.begin(), s.end())); // generate all unique permutations
    
    cout << res.size() << "\n";
    for (auto &x : res) cout << x << "\n";
    
    return 0;
}
