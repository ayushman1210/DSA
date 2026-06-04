#include<iostream>
#include<vector>
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

Node* adder (Node*head, Node*head1){
    Node*t1=head;
    Node*t2=head1;
    Node* dn=new Node(-1);
    Node* curr=dn;
    int carry=0;

    while(t1!=NULL || t2!=NULL || carry!=0){
        int sm=carry;
        if(t1!=NULL){sm+=t1->data; t1=t1->next;}
        if(t2!=NULL){sm+=t2->data; t2=t2->next;}
        carry=sm/10;
        Node* temp=new Node(sm%10);
        curr->next=temp;
        curr=curr->next;
    }
    return dn->next;
}

int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>v2={1,2,3,4,5};
    Node* head=new Node(v[0]);
    Node* move= head;
    for(int i=1; i<v.size(); i++){
        Node* temp=new Node(v[i]);
       move->next=temp;
       move=temp;
    }

    Node* head1=new Node(v2[0]);
    Node* move1= head1;
    for(int i=1; i<v2.size(); i++){
        Node* temp1=new Node(v2[i]);
       move1->next=temp1;
       move1=temp1;
    }
    Node* res=adder(head,head1);
    while(res!=NULL){
        cout<<res->data<<" ";
        res=res->next;
    }
}