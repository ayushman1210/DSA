#include<bits/stdc++.h>
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
vector<int>v={1,2,3,4,5};
Node* head=new Node(v[0]);
Node* move=head;

//itrete over the vector and create nodes and link them

for(int i=1; i<v.size(); i++){
    Node*temp=new Node(v[i]);
    move->next=temp;
    move=temp;
}
// if(head==NULL){
//     cout<<"LL is empty";
//     return 0;
// }
// // delete the head node and print the remaining ll

// else{
// Node*temp=head;
// head=head->next;
// free(temp);
// while(head!=NULL){
//     cout<<head->data<<" ";
//     head=head->next;
// }
// }

// delete the last node and print the remaining ll

// if(head==NULL || head->next==NULL){
//     cout<<"LL is empty or has only one node";
//     return 0;
// }else{
// Node*temp=head;
// while(temp->next->next!=NULL){
//     temp=temp->next;
// }
// free(temp->next);
// temp->next=NULL;
// while(head!=NULL){
//     cout<<head->data<<" ";
//     head=head->next;
// }
// }

//delete at the given position and print the remaining ll

// int k;
// cin>>k;
// if(head==NULL){
//     cout<<"LL is empty";
//     return 0;
// }
// else if(k==1){
//     Node*temp=head;
//     head=head->next;
//     free(temp);
// }
// Node*temp=head;
// Node*prev=NULL;
// int cnt=1;
// while(temp!=NULL && cnt<k){
//     prev=temp;
//     temp=temp->next;
//     cnt++;
// }
// if(temp==NULL){
//     cout<<"Position out of range";
//     return 0;
// }
// prev->next=temp->next;
// free(temp);     
// Node* curr = head;
// while(curr != NULL){
//     cout << curr->data << " ";
//     curr = curr->next;
// }

// deletion of the value and print the remaining ll

//inserting at the head 

// Node* temp=new Node(0);
// temp->next=head;
// head=temp;
// Node* curr=head;
// while(curr!=NULL){
//     cout<<curr->data<<" ";
//     curr=curr->next;    
// }

//insertion at the end ;

// Node* temp=new Node(6);
// move=head;
// while(move->next!=NULL){
//     move=move->next;
// }
// move->next=temp;
// temp->next=NULL;
// Node* curr=head;
// while(curr!=NULL){
//     cout<<curr->data<<" ";
//     curr=curr->next;
// }

//at the value 

// int x;
// cin>>x;
// Node* temp=new Node(2);
// move=head;
// while(move!=NULL && move->data!=x){
//     move=move->next;    
// }
// if(move==NULL){
//     cout<<"Value not found";
//     return 0;
// }

// temp->next=move->next;
// move->next=temp;
// Node* curr=head;
// while(curr!=NULL){
//     cout<<curr->data<<" ";
//     curr=curr->next;
// } 

// at the index 
// Node* temp= new Node(2);
// int k;
// cin>>k;
// if(k==1){
//     temp->next=head;
//     head=temp;
// }else{
// move=head;
// int i=0;
// while(move!=NULL && i<k-2){
//     move=move->next;
//     i++;
// }
// if(move==NULL){
//     cout<<"Position out of range";
//     return 0;
// }
// temp->next=move->next;
// move->next=temp;
// }
// Node* curr=head;
// while(curr!=NULL){
//     cout<<curr->data<<" ";
//     curr=curr->next;
// }
}
