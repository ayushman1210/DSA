#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>, greater<int>>pq;
    int k=3;
    vector<int>ans;
    vector<int>v={6,5,3,2,8,10,9};
    for(int i=0; i<v.size(); i++){
        pq.push(v[i]);
        if(pq.size()>k){ans.push_back(pq.top()); pq.pop();}
    }
    while(pq.size()>0){
    ans.push_back(pq.top());
        pq.pop();
    }
        
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
}