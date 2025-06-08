#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    while(m > 0 && n > 0){
        int sum = 0;
        int start = min(m, n);
        int end = max(m, n);
        for(int i = start; i <= end; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
        cin >> m >> n;
    }
}