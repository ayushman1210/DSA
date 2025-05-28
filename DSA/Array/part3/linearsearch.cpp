#include<bits/stdc++.h>
using namespace std;
void linear(vector<int>&v, int k){
    int n=v.size();
    bool flag=false;
    for(int i=0; i<n; i++){
        if(v[i]==k){
            flag=true;
            break;
        }
        else{continue;}
    }
    if(flag==true){cout<<"element found";}
    else{
        cout<<"element not found ";
    }
}

int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
cin>>v[i];
}
int k;
cin>>k;
linear(v,k);
// for(int i=0; i<t; i++){
//     cout<<v[i];
// }
}