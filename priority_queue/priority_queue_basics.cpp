#include<bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<int>pq;
    priority_queue<int, vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(3);
    pq.push(11);
    pq.push(21);

    cout<<pq.top();
    pq.pop();
    cout<<pq.top();

   
}