#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v, vector<int>&v1){
    int n=v.size();
    int m=v1.size();
    int i=0;
    int j=0;
    vector<int>u;
    while(i<n && j<m){
        if(v[i]<=v1[j]){
            if(u.size()==0 || u.back()!=v[i]){
                u.push_back(v[i]);
            }
            i++;
        }
        else{
             if(u.size()==0 || u.back()!=v1[j]){
                u.push_back(v[j]);
            }
            j++;
        }
        }
        while(j<m){
             if(u.size()==0 || u.back()!=v1[j]){
                u.push_back(v1[j]);
            }
            j++;
        }

        while(i<n){
             if(v[i]<=v1[j]){
            if(u.size()==0 || u.back()!=v[i]){
                u.push_back(v[i]);
            }
            i++;
        }
    }

    for(int i=0; i<u.size(); i++){
        cout<<u[i];
    }
}
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
cin>>v[i];
}
int x; cin>>x;
vector<int>v1(x);
for(int i=0; i<x; i++){
    cin>>v1[i];
}
merge(v,v1);

}