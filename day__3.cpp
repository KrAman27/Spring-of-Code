#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
public:
    node (int d){
    data = d;
    left = right = NULL;
    }

};

    void insert_node(node* &root, int value){
    if(root==NULL){
       root = new node(value);
       return;
    }

    if(value <= root->data){
        if(root->left == NULL){
            root->left = new node(value);
        }
        else {
            insert_node(root->left,value);
        }
    }
    else{
       if(root->right == NULL){
            root->right = new node(value);
        }
        else {
            insert_node(root->right,value);
        }
    }
    }

    void print_inorder(node* root){
        if(root==NULL) return;
        print_inorder(root->left);
        cout<<root->data<<" ";
        print_inorder(root->right);
    }

int main(){
node* root = NULL;

insert_node(root,40);
insert_node(root,50);
insert_node(root,70);
insert_node(root,10);
insert_node(root,20);
insert_node(root,90);
insert_node(root,60);
insert_node(root,30);


print_inorder(root);

return 0;
}
