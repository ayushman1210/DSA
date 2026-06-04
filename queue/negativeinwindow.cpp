#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {0,-1,-2,3,4,-5,6,4,7,-8};
    int k = 3;

    queue<int> q;
    vector<int> ans;
    int n=v.size();
    for(int i = 0; i < k; i++){
        if(v[i] < 0){
            q.push(i);
        }
    }
    int i=0;
    while(i+k<=n){
        while(q.size()>0 && q.front()<i){q.pop();}
        if(q.front()>=i+k || q.size()==0){ans.push_back(0);}
        else{ans.push_back(v[q.front()]);}
        i++;
        }
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
}