// #include<bits/stdc++.h>
// using namespace std;
// void fact(int n){
//     long long fact0=1;
//     int count=0;
// while(n>0){
// if(n==1){n--;}
// else{ 
//     fact0=fact0*n; 
//     n--;
// }
// }
// while(fact0>0){
// long long ld=fact0%10;
// fact0=fact0/10;
// if(ld==0){count++;}
// else{break;}
// }
// cout<<count;
// }

// int main(){
// int t;
// cin>>t;
// fact(t);
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (long long i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    cout << count;
}