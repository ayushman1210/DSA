#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
cin >> n;
vector<int> a(n);
    for (int i = 0; i < n; ++i) {
cin >> a[i];
    }
 sort(a.begin(), a.end());
    bool cn = true;
    for (int i = 1; i < n - 1; i += 2) {
        if (a[i] != a[i + 1]){
            cn = false;
            break;
        }
    }

    if (cn) {
        cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
}

int main() {
    int t;
cin >> t;
    while (t--) {
        solve();
    }
}