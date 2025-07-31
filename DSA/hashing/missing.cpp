#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define all(x) x.begin(), x.end()
#define dbg(x) cerr << #x << " = " << x << endl;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// GCD and LCM
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// Binary Search Template
int binarySearch(vi &a, int target) {
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == target) return mid;
        else if (a[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

// Prefix Sum
vi prefixSum(const vi &arr) {
    int n = arr.size();
    vi prefix(n + 1, 0);
    rep(i, 0, n) prefix[i + 1] = prefix[i] + arr[i];
    return prefix;
}

// Sieve of Eratosthenes
const int N = 1e6 + 5;
vector<bool> is_prime(N, true);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i)
                is_prime[j] = false;
        }
    }
}

// Check Palindrome
bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}

// Comparator for sorting pairs by second element
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
void hello(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n-1; i++){
        cin>>v[i];
    }

    int xor1=0;
   int  xor2=0;
    for(int i=0; i<n; i++){
        xor2=xor2^v[i]; 
        xor1=xor1^(i+1);
    }
    int ans=xor1^xor2;
    cout<<ans;
}
int main() {
    fast_io;
hello();
    return 0;
}