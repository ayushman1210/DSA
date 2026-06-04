#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
        Node *newNode=new Node(val);
        newNode->next=head;
        head=newNode;
        size++;
    }
    void pop(){
        Node *temp=head;
        head=head->next;
    }
    int top(){
        return head->data;
    }
}
int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
cout<<st.top()<<endl;
}