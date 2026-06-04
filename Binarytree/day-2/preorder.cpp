#include<iostream>
using namespace std;


class Nodetree{
    public:
    int val;
    Nodetree* left;
    Nodetree* right;

    Nodetree(int data){
        this->val=data;
        this->left=NULL;
        this->right=NULL;
    }
};
// preorder 
void display(Nodetree* root){
    if(root==NULL){return;}
    cout<<root->val<<" ";
    display(root->left);
        // cout<<root->val<<" ";  inorder 
    display(root->right);
        // cout<<root->val<<" ";  postorder 

}

int main(){
Nodetree* a= new Nodetree(1);
Nodetree* b= new Nodetree(2);
Nodetree* c= new Nodetree(3);
Nodetree* d= new Nodetree(4);
Nodetree* e= new Nodetree(5);
Nodetree* f= new Nodetree(6);
Nodetree* g= new Nodetree(7);
Nodetree* h= new Nodetree(8);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
g->left=h;
display(a);
}