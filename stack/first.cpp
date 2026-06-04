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
cout<<st.size()<<endl;
cout<<st.top()<<endl;
st.pop();
cout<<st.top()<<endl;
cout<<st.size()<<endl;

while(st.size()>0){
    cout<<st.top()<<" ";
    st1.push(st.top());
    st.pop();
}
cout<<st1.size()<<endl;
while(st1.size()>0){
    cout<<st1.top()<<" ";
    st.push(st1.top());
    st1.pop();
}
cout<<st.size()<<endl;
}