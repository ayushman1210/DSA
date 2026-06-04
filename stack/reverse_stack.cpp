#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int>st;
  stack<int>temp;
  stack<int>st2;

st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);

  while(st.size()>0){
    temp.push(st.top());
    st.pop();
  };

  while(temp.size()>0){
    st2.push(temp.top());
    temp.pop();
  }

  while(st2.size()>0){
    st.push(st2.top());
    cout<<st.top()<<" ";
    st2.pop();
  }
  // using vectors to reverse a stack
  vector<int>v;
while(st.size()>0){
    v.push_back(st.top());
    st.pop();
}

for(int i=0; i<v.size(); i++){
    st.push(v[i]);
    cout<<st.top()<<" ";
}

}