#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
    data = d;
    left = right = NULL;
    }
};

node* headnode = NULL;
node* prevnode = NULL;

void flatten_tree(node* root,int order){
if(root==NULL) return;

if(order==1){
    flatten_tree(root->right,order);
}
else{
    flatten_tree(root->left,order);
}

node* rightnode = root->right;
node* leftnode = root->left;

if(headnode==NULL){
    headnode = root;
    root->left = NULL;
    prevnode = root;
}

else{
    prevnode->right = root;
    root->left = NULL;
    prevnode = root;
}

if(order==1){
    flatten_tree(leftnode,order);
}

else{
    flatten_tree(rightnode,order);
}
}

void print_tree(node* root){
if(root==NULL) return;
cout<<root->data<<" ";
print_tree(root->right);
}

int main(){
node* root = new node(5);
root->left = new node(3);
root->right = new node(6);

int order = 0;

flatten_tree(root,order);
print_tree(headnode);

return 0;
}
