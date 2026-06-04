#include<iostream>
#include<vector>
using  namespace std;
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

    // if(head==NULL || head->next==NULL){
    //     cout<<"NULL";
    // return 0;
    // }
    // Node* temp=head;
    // head=head->next;
    // head->prev=NULL;
    // delete temp;
    // Node* curr=head;
    // while(curr!=NULL){
    //    cout<<curr->data;
    //     curr=curr->next;
    // }

    // if(head==NULL || head->next==NULL){
    //     cout<<"NULL"; return 0;
    // }
    // Node* temp=head;
    // while(temp->next->next!=NULL){
    //     temp=temp->next;
    // }
    // Node* last=temp->next;
    // delete last;
    // temp->next=NULL;
    //  Node* curr=head;
    // while(curr!=NULL){
    //    cout<<curr->data;
    //     curr=curr->next;
    // }

    // delete kth element


    // int k=3;
    // int cnt=1;
    // Node*temp=head;
    // while(temp!=NULL && cnt<k){
    //     cnt++;
    //     temp=temp->next;
    //     }
    //     if(temp==NULL){cout<<"NULL"; return 0;}
    //     Node* back=temp->prev;
    //     Node* front=temp->next;

    //     if(back==NULL && front==NULL){
            
    //         cout<<"NULL";
    //         delete temp;
    //         return 0;
    // }
    // else if(back==NULL){
    //     head=head->next;
    //     head->prev=NULL;
        
    // }
    // else if(front==NULL){
    //     while(temp->next!=NULL){
    //         temp=temp->next;
    //     }
    //     temp->prev->next=NULL;
    
    // }

    // back->next=front;
    // front->prev=back;
    // delete(temp);
    // Node* curr=head;

    // while(curr!=NULL){
    //      cout<<curr->data;
    //     curr=curr->next;
    // }

    //deleting the node 
    Node* temp=head;
    Node* back=temp->prev;
    Node* front=temp->next;

    if(front==NULL){
        back->next=NULL;
        temp->back=NULL;
        delete temp;
        return 0;
    }
    back->next=front;
    front->prev=back;
    temp->next=temp->prev=NULL;
    delete temp;
}