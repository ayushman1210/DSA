#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_set<int>s;
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(4);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(4);
cout<<s.size();
int y=3;
if(s.find(y)!=s.end()){cout<<"exist";}
//for each loop 
for(int x:s){
    cout<<x;
}
}