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


int diameter(Nodetree* root){
    if(root==NULL){return 0;}
    int lst=diameter(root->left);
    int rst=diameter(root->right);
    return lst+rst;
}

int dia(Nodetree *root){
    if(root==NULL){return 0;}
    return 1+max(dia(root->left),dia(root->right));
}

void helper(Nodetree* root ,int &maxi){
    if(root==NULL){return ;}
    int di=dia(root->left)+dia(root->right);
    maxi=max(di,maxi);
    helper(root->left, maxi);
    helper(root->right, maxi);
    
}

int dbt(Nodetree* root){
    if(root==NULL){return 0;}
    int maxi=0;
    helper(root, maxi);
    return maxi;
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

// cout<<diameter(a);

cout<<dbt(a);
}