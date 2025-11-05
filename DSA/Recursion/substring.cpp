#include <bits/stdc++.h>
using namespace std;

bool check(const string &t, const string &s) {
    return t.find(s) != string::npos;
}

int main() {
    int p;
    cin >> p;
    while (p--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string t = x; 
        int ops = 0;
        bool found = false;

        for (int i = 0; i <= 10; i++) {   
            if (check(t, s)) {
                cout << ops << "\n";
                found = true;
                break;
            }
            t += t;  
            ops++;
        }

        if (!found) cout << -1 << "\n";
    }
    return 0;
}
