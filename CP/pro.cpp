#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        if (n % 2 != 0) {
            cout << "YES" << endl; 
            continue;
        }
        while (n % 2 == 0) {
            n /= 2;
        }
        if (n == 1) {
            cout << "NO" << endl; 
        } else {
            cout << "YES" << endl; 
        }
    }
}
