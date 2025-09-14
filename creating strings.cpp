#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end()); // start with smallest permutation
    vector<string> res;

    while (true) {
        res.push_back(s);                 // store current permutation
        if (!next_permutation(s.begin(), s.end())) break; // generate next one, stop if none
    }

    cout << res.size() << "\n";
    for (auto &x : res) cout << x << "\n";
}
