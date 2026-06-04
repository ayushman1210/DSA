#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<int>q;
//push 
q.push(10);
q.push(20);
q.push(30);
cout<<q.size();
cout<<q.front();
//back 
cout<<q.back();
//pop
q.pop();
cout<<q.front();
q.size();
// front -->top


}