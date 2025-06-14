#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            int maxi = v[i]; 
            for (int j = i; j < n; j++) {
                maxi = max(maxi, v[j]);
                cout << maxi << " ";
            }
        }
        cout << endl;
    }
}
