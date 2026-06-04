#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={100,80,60,70,60,75,85};
    vector<int>ans(arr.size(),-1);
    stack<int>st;
    st.push(0);
    for(int i=1; i<arr.size(); i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(i);
    }
    for(int i=0; i<ans.size(); i++){ans[i]=i-ans[i]; }
    for(int i=0; i<ans.size(); i++){cout<<ans[i]<<" "; }
}