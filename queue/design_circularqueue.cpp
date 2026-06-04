#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int b;
    int s;
    vector<int> arr;

    Queue(int val){
        f = 0;
        b = 0;
        s=0;
        vector<int>v(val);
        arr=v; 
    }
    
    void push(int val){
        if(b == arr.size()){
            cout << "Queue is full\n";
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }

    void pop(){
        if(b - f == 0){
            cout << "Queue is empty\n";
            return;
        }
        f++;
        s--;
    }

    int top(){
        if(b - f == 0){
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(b - f == 0){
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[b-1];
    }

    int size(){
        return b - f;
    }

    bool empty(){
        return (b - f == 0);
    }

    void display(){
        if(empty()){
            cout << "Queue is empty\n";
            return;
        }
        for(int i = f; i < b; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    
    q.pop();
    q.display();
}