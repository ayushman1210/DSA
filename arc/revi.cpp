#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
int a=0;
int b=0;
for(int i=0; i<n; i++){
    if(i%2==0){
            if(v[i]%2==0){a++;}
            else {b++;}
    }
    else{
        if(v[i]%2!=0){a++;}
        else {b++;}
    }
}
if(a!=b){
    cout<<a;
}
else {
    cout<<-1;
}
    }

}