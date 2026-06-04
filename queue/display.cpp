#include<bits/stdc++.h>
using namespace std;

void display(queue<int>&q){
    int n=q.size();
    while(n--){
        int x=q.front();
        cout<<x;
        q.pop();
        q.push(x);
    }
}

void reverse(queue<int>&q){
    stack<int>st;
    int n=q.size();
    while(n--){
        int x=q.front();
        st.push(x);
        q.pop();
        
    }

    int sz=st.size();
    while(sz--){
        q.push(st.top());
    st.pop();
    }
    display(q);


}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);


    // cout<<q.front();

    // display(q);?
    reverse(q);

}