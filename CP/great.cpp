#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
 int arr[n+1];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
     int mini=INT_MAX;
    for(int i=1; i<=n-1; i++){
        for(int j=i+1; j<=n; j++){
            int val=arr[i]+arr[j]+j-i;
            if(mini>=val){mini=val;}
           
        }
    }
    cout<<mini<<endl;
    }
}