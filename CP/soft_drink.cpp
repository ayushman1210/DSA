#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, c, d, p, nl, np;
    cin >> n >> k >> c >> d >> p >> nl >> np;
    int total_drinks = k * c;
    int total_slices = d * p;
    int total_salt = p / np;
    int toasts = min(total_drinks / nl, min(total_slices, total_salt)) / n;
    cout << toasts;
}