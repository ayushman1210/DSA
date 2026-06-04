#include<bits/stdc++.h>
using namespace std;


bool check(int n){
    if(n==1 || n==0){return false;}
    for(int i=2; i*i<=n; i++){
        if(n%i==0){return false;}
    }
    return true;
}
int main(){
    int n; 
    cin>>n;
    if(check(n-2)){
        cout<<"2"<<" "<<n-2<<"\n";
    }
    else{
        cout<<"-1\n";
    }
}