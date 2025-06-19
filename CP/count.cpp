#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
   
    while(n--){
    int t;
    cin >> t;
     long long count = 0;
    vector<int> v(t);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < t; i++) {
        for (int j = i; j < t; j++) {
            if (j > i && v[j-1] > v[j]) break;
            count++;
        }
    }
        cout << count<<endl;
}


}