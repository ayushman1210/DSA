#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int n;cin>>n;
    vector<int> v(t);
    for(int i = 0; i < t; i++) cin >> v[i];

    unordered_map<int, int> freq;
    for(int x : v) freq[x]++;

    for(int i = 0; i < n; i++) {
        cout << freq[v[i]] << endl;
    }
    return 0;
}