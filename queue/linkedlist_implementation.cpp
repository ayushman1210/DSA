#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue{
public:
    Node* head;
    Node* tail;
    int size;

    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void pop(){
        if(head == NULL){
            cout<<"Queue is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head == NULL)
            tail = NULL;
        delete temp;
        size--;
    }

    int front(){
        if(head == NULL){
            cout<<"Queue is empty\n";
            return -1;
        }
        return head->val;
    }

    int back(){
        if(head == NULL){
            cout<<"Queue is empty\n";
            return -1;
        }
        return tail->val;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};
int main(){
Queue q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.display();
q.pop();
q.display();
}