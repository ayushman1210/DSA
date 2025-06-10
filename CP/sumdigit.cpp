#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    for(char c : s) {
        sum += c - '0';
    }
    cout << sum;
    return 0;
}