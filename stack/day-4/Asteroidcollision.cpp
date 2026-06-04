#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    stack<int>stp;
    stack<int>stn;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int i=0;
    while(i<n){
        if(stp.size()>0 && stn.size()>0){
            if(abs(stp.top())>abs(stn.top())){stn.pop();}
            else if(abs(stp.top())==abs(stn.top())){stn.pop(); stp.pop();}
            else{stp.pop();}
        }
        if(v[i]>0){stp.push(s[i]); i++;}
        else{stn.push(s[i]); i++;}
    }
}