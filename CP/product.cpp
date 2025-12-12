#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        bool found = false;
        for (int i = 0; i < n; i++) {
            long long leftProd = 1, rightProd = 1;
            for (int j = 0; j < i; j++)
                leftProd *= v[j];
            for (int j = i + 1; j < n; j++)
                rightProd *= v[j];
            if (leftProd == rightProd) {
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << endl;
    }
}
