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
    // insertion before the head node
    // Node*temp=new Node(0);
    // temp->prev=NULL;
    // temp->next=head;
    // head->prev=temp;
    // head=temp;
    // Node* curr=head;
    // while(curr!=NULL){
    //     cout<<curr->data;
    //     curr=curr->next;
    // }
    
    // Insertion at tail 
    // Node * ele=new Node(5);
    // Node* temp=head;
    // while(temp->next!=NULL){
    //     temp=temp->next;
    // }
    // temp->next=ele;
    // ele->prev=temp;
    // ele->next=NULL;
    // Node* curr=head;
    // while(curr!=NULL){
    //     cout<<curr->data;
    //     curr=curr->next;
    // }

    //insert at index
    
}