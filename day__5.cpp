#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
public:
    node(int d){
        data = d;
        left = right = NULL;
    }
};


int findmax(node* root){
        if(root==NULL){
            return 0;
        }

        if(root->left==NULL and root->right==NULL){
            return root->data;
        }

        if(root->left==NULL){
            if(root->right->data > root->data)
            return root->right->data;
            return root->data;
        }

        if(root->right==NULL){
            if(root->left->data > root->data)
            return root->left->data;
            return root->data;
        }

        int left_tree = findmax(root->left);
        int right_tree = findmax(root->right);

        return max(left_tree,max(right_tree,root->data));
    }


int main()
{

node* root = new node(10);
root->left = new node(11);
root->right = new node(9);
root->left->left = new node(7);
root->left->right = new node(12);
root->right->left = new node(18);
root->right->right = new node(51);

cout<<findmax(root)<<endl;

   return 0;
}
