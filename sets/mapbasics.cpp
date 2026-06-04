#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>m;
    pair<string,int>p;
    p.first="ayushman";
    p.second=91;

    pair<string,int>p1;
    p1.first="ayshman";
    p1.second=91;


    pair<string,int>p2;
    p2.first="ayushmn";
    p2.second=91;

    m["ayush"]=91;

    m.insert(p);
    m.insert(p1);
    m.insert(p2);

m.erase("ayush");
    for(auto x:m){
        cout<<x.first<<x.second<<endl;
    }
cout<<m.size();
    

}