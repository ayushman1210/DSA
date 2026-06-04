#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int>ans;
        int a=x%10;
        if(a>0){ans.push_back(a); x=x-a;}
        int b=x%100;
        if(b>0){ans.push_back(b); x=x-b;}
        int c=x%1000;
         if(c>0){ans.push_back(c); x=x-c;}
        int d=x%10000;
         if(d>0){ans.push_back(d); x=x-d;}
        int e=x%100000;
         if(e>0){ans.push_back(e); x=x-e;}

         cout<<ans.size()<<"\n";
         for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
         }
         cout<<endl;
    }

}