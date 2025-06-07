#include<bits/stdc++.h>
using namespace std;
int  brute(vector<int>v, int k){
int maxi=0;
int t=v.size();
for(int i=0; i<t; i++){
    int sum=0;
    for(int j=i; j<t; j++){
// for(int k=i; k<=j; k++){
sum+=v[j];
// }
if(sum==k){maxi=max(maxi,j-i+1);}
    }
}
return maxi;
}
int better(vector<int>v, int k){

}
int optimal(vector<int>v, int k){
    int sum=v[0];
    int t=v.size();
    int j=0; int i=0; int maxlen=0;
    while(i<=t){
        while(j<=i && sum>k){sum-=v[j]; j++;}
        if(sum==k){maxlen=max(maxlen,i-j+1);}
        i++;
       if(i<t) sum+=v[i];
    }
    return maxlen;
}
int main(){
int t;
cin>>t;
vector<int>v(t);
int q;
cin>>q;
for(int i=0; i<t; i++){
    cin>>v[i];
}
// cout<<brute(v,q);
// cout<<better(v,q);
cout<<optimal(v,q);
}