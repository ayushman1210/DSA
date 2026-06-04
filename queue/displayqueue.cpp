#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
queue<int>q;
stack<int>st;
//display 
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
int n=q.size();
// int i=1;
// while(i<=n){
//     int x=q.front();
//     cout<<x<<endl;
//     q.push(x);
//     q.pop();
//     i++;
// }

//display in reverse using stack 
for(int i=1; i<=n; i++){
    int x=q.front();
    st.push(x);
    q.pop();
}
while(st.size()>0){
    int y=st.top();
    q.push(y);
    st.pop();
}

}