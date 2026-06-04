#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n; 
    cin>>n;
    vector<long long >v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int no=0;
    int nt=0;
    for(int i=0; i<n; i++){
        if(v[i]==1){no++;}
        else{nt++;}
    }
    vector<long long>ans;
     if(nt>0){ans.push_back(2); nt--;}
     if(no>0){ans.push_back(1); no--;}
    for(int i=0; i<n-2; i++){
       if(nt>0){ans.push_back(2); nt--;}
       else{
        ans.push_back(1); no--;
       }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}