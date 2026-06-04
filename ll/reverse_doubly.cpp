#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

int main(){
    vector<int>v={1,2,3,4,5};
    Node* head=new Node(v[0]);
    Node*move=head;

    for(int i=1; i<v.size(); i++){
        Node* temp=new Node(v[i]);
        move->next=temp;
        temp->prev=move;
        move=temp;
    }

    // tc(2n) sc(n)

    // stack<int>st;
    // Node *temp=head;
    // while(temp!=NULL){
    //     st.push(temp->data);
    //     temp=temp->next;
    // }
    // temp=head;
    // while(temp!=NULL){
    //     temp->data=st.top();
    //     st.pop();
    //     temp=temp->next;
    // }
    // Node* curr=head;
    // while(curr!=NULL){
    //     cout<<curr->data<<" ";
    //     curr=curr->next;
    // }


    // tc(n) sc(1)
    
    if(head==NULL || head->next==NULL){
        cout<<"NULL"; return 0;
    }
    Node * prev=NULL;
    Node * curr=head;
    while(curr!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    head=prev->prev;
    Node * curnt=head;
    while(curnt!=NULL){
        cout<<curnt->data;
        curnt=curnt->next;
    }
}