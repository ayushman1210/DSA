#include<bits/stdc++.h>
using namespace std;

Class Stack{
    public:
    int arr[5];
    int idx;
     
    stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==4){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
}
int main(){
    Stack st;

}