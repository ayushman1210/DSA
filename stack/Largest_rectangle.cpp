#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={2,1,5,6,2,3};
    vector<int>ans(arr.size(),-1);
    vector<int>ans1(arr.size(),-1);
    stack<int>st;
    st.push(arr[0]);

    for(int i=1; i<arr.size(); i++){
        while(st.size()>0 && st.top()>=arr[i]){
            st.pop();
        }
        if(st.size()==0){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }

    stack<int>st1;
    st1.push(arr[arr.size()-1]);
    for(int i=arr.size()-2; i>=0; i--){
        while(st1.size()>0 && st1.top()>=arr[i]){
            st1.pop();
        }
        if(st1.size()==0){
            ans1[i]=-1;
        }
        else{   ans1[i]=st1.top();}
st1.push(arr[i]);
}
for(int i=0; i<ans.size(); i++){cout<<ans[i]<<" "<<ans1[i]<<endl; }
}