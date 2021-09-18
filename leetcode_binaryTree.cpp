#include<bits/stdc++.h>
using namespace std;

class BinaryTreeNode{
    public:
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }

    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

void preorderTraversal(BinaryTreeNode* root){
    if(root==NULL)return ;
    cout<<root->data<<":";
    if(root->left)cout<<root->left->data<<" ";
    if(root->right)cout<<root->right->data;
    cout<<endl;

    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(BinaryTreeNode* root){
    if(root==NULL)return ;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

void inorderTraversal(BinaryTreeNode* root){
    if(root==NULL)return ;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
    
}

void labelorderTraversal(BinaryTreeNode* root){
    queue<BinaryTreeNode*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode* first=q.front();
        cout<<first->data<<" ";
        q.pop();
        if(first->left!=NULL){
           q.push(first->left);
        }
        if(first->right!=NULL){
            q.push(first->right);
        }
    }
}

int countOfBinaryTree(BinaryTreeNode* root){
    if(root==NULL)return 0;
    return 1+countOfBinaryTree(root->left)+countOfBinaryTree(root->right);
}

int heightOfBinaryTree(BinaryTreeNode* root){
    if(root==NULL)return 0;

    return 1+max(heightOfBinaryTree(root->left),heightOfBinaryTree(root->right));
}




int main(){
  BinaryTreeNode* root=new BinaryTreeNode(10);
  BinaryTreeNode* node1=new BinaryTreeNode(5);
  BinaryTreeNode* node2=new BinaryTreeNode(15);
  BinaryTreeNode* node3=new BinaryTreeNode(25);
  BinaryTreeNode* node4=new BinaryTreeNode(35);
  BinaryTreeNode* node5=new BinaryTreeNode(45);
  BinaryTreeNode* node6=new BinaryTreeNode(65);
  BinaryTreeNode* node7=new BinaryTreeNode(75);
  BinaryTreeNode* node8=new BinaryTreeNode(85);


  root->left=node1;
  root->right=node2;

  node2->right=node6;

  node1->left=node3;
  node1->right=node4;

  node3->left=node5;
  node5->left=node7;
  node7->left=node8;

//   preorderTraversal(root);
//   postorderTraversal(root);
// inorderTraversal(root);
// labelorderTraversal(root);
// cout<<countOfBinaryTree(root);
cout<<heightOfBinaryTree(root);

}

