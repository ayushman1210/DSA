#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};


int main(){
Node* x=new Node(2);
Node* y=new Node(3);
Node* z=new Node(4);
// linking converting this to ll
x->next=y;
y->next=z;
Node *temp=x;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
//length just take counter and inc it 
}