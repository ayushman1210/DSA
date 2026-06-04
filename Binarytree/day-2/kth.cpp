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
void display(Nodetree* root, int k, int cnt){
    if(root==NULL){cnt--; return;}
    if(k==cnt){cout<<root->val; return;}
    display(root->left,k,cnt+1);
    display(root->right,k,cnt+1);
}

void nthreverse(Nodetree* root, int k, int cnt){
    if(root==NULL){return;}
    if(k==cnt){
        cout<<root->val; return ;
    }
        nthreverse(root->right,k,cnt+1);
        nthreverse(root->left,k, cnt+1);
}

int lvl(Nodetree* root){
    if(root==NULL){return 0;}
    else{
        return 1+max(lvl(root->left),lvl(root->right));
    }
}

void level(Nodetree* root){
    int n=lvl(root);
    for(int i=1; i<=n; i++){
    //    display(root,i,1);
    nthreverse(root,i,1);
        cout<<endl;
    }
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
// int k;
// cin>>k;
int cnt=1;
// display(a,k,cnt);
level(a);
}