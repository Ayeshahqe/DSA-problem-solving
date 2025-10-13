#include <iostream>
using namespace std;

// Node structure for Binary tree.

struct node{
    int data;
    node* left;
    node* right;

    node(int value){
        data = value;
        left = right = NULL;
    }
};

// Inorder traversal

void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder traversal

void preorder(node* root){
    if(root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder traversal

void postorder(node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}