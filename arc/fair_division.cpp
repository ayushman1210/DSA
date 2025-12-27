#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
  
    while(t--){
int n;
 cin>>n;
 int cnt=0; int cnt1=0;
vector<int>v(n);
bool flag=true;
for(int i=0; i<n; i++){cin>>v[i];} 
for(int i=0; i<n; i++){
    if(v[i]==1){cnt++;}
    else {cnt1++;}
}
if(cnt%2==0 && cnt1%2!=0 && cnt>0){cout<<"YES"<<endl;}
else if(cnt%2==0 && cnt1%2==0 ){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
    }

}