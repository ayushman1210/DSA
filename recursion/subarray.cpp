#include<bits/stdc++.h>
using namespace std;

void subar(vector<int>v, int arr[], int n, int idx){
    if(idx==n){
        for(int i=0; i<v.size(); i++){
            cout<<v[i];
        }
        cout<<endl;
        return ;
    }
    subar(v,arr,n,idx+1);
    v.push_back(arr[idx]);
    if(v.size()==0){
        subar(v,arr,n,idx+1);
    }
}
int main(){
int arr[]={1,2,3,4};
int n=4;
vector<int>v;
subar(v,arr,n, 0);
}