//  array not sorted 

#include<bits/stdc++.h>
using namespace std;


int main(){
    int k=3;
    vector<int>v={18,2,4,1,7,3,8,9,0};
    priority_queue<int>pq;
    for(int i=0; i<v.size(); i++){
        pq.push(v[i]);
    }
    for(int i=0; i<k; i++){
        pq.pop();
    }
    cout<<pq.top();
}