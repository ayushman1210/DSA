#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={3,1,2,5,4,6,2,3};
    vector<int>ans(8,-1);
    stack<int>st;
    st.push(arr[0]);
    // for(int i=1; i<8; i++){
        
    //     while(st.size()>0 &&  st.top()<=arr[i]){
    //         st.pop();
    //     }
    //     if(st.size()==0){
    //         ans[i]=-1;
    //     }
    //     else{
    //         ans[i]=st.top();
    //     }
    //     st.push(arr[i]);
    // }
    for(int i=1; i<8; i++){
        
        while(st.size()>0 && arr[i]>=st.top()){
            st.pop();
        }
        if(st.size()>0 && arr[i]<=st.top()){
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }
    for(int i=0; i<8; i++){
        cout<<ans[i]<<" ";
    }
}  