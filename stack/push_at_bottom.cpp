#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    stack<int>st1;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
while(st.size()>0){
    st1.push(st.top());
    st.pop();
}
st.push(0);
while(st1.size()>0){
    st.push(st1.top());
    st1.pop();
}

while(st.size()>0){
    cout<<st.top()<<" ";
    st.pop();
}
}