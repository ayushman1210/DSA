#include <bits/stdc++.h>
using namespace std;


bool check(vector<int>v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
 cin>>n;
 int cnt=0;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}

if(check(v)){
int maxi=*max_element(v.begin(), v.end());
int smaxi=INT_MIN;

for(int i=0;i<n; i++){
    if(v[i]<maxi && v[i]>smaxi){smaxi=v[i];}
}
if(smaxi==INT_MIN){smaxi=maxi;}
if((maxi-smaxi)%2!=0){((maxi-smaxi)/2)+1;}else{cnt=maxi-smaxi}
}
cout<<cnt;
    }

}
