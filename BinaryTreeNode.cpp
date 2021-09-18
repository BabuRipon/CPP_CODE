#include<iostream>
#include"BinaryTreeNode.h"
#include<queue>
using namespace std;

void printTreeNode(BinaryTreeNode<int> *root){
    if(root==NULL)return;
    cout<<root->data<<":";
    if(root->left){
        cout<<"L-"<<root->left->data<<",";
    }
    if(root->right){
        cout<<"R-"<<root->right->data<<" ";
    }
    cout<<endl;
    printTreeNode(root->left);
    printTreeNode(root->right);
}

BinaryTreeNode<int>* takeInputOfTree(){
 int data;
 cout<<"enter data"<<endl;
 cin>>data;
 if(data==-1){
     return NULL;
 }
 BinaryTreeNode<int> *root=new BinaryTreeNode<int>(data);
 BinaryTreeNode<int> *left=takeInputOfTree();
 BinaryTreeNode<int> *right=takeInputOfTree();

 root->left=left;
 root->right=right;

 return root;
}

BinaryTreeNode<int>* takeInputLabelWise(){
   int data;
   cout<<"enter root data"<<endl;
   cin>>data;
   queue<BinaryTreeNode<int> *> pendingQueue;
   BinaryTreeNode<int> *root=new BinaryTreeNode<int>(data);
   pendingQueue.push(root);
   while (pendingQueue.size())
   {
     BinaryTreeNode<int> *front=pendingQueue.front();
     pendingQueue.pop();

     int leftdata;
     cout<<"enter left data of "<<front->data<<endl;
     cin>>leftdata;
     if(leftdata!=-1){
        BinaryTreeNode<int> *rightChild=new BinaryTreeNode<int>(leftdata);
        front->left=rightChild;
        pendingQueue.push(rightChild);
     }

     int rightdata;
     cout<<"enter right data of "<<front->data<<endl;
     cin>>rightdata;
     if(leftdata!=-1){
        BinaryTreeNode<int> *rightChild=new BinaryTreeNode<int>(rightdata);
        front->right=rightChild;
        pendingQueue.push(rightChild);
     }

   }

   return root;

}

void printBinaryTreeLabelWise(BinaryTreeNode<int> *root){
    queue<BinaryTreeNode<int>*> pendingQueue;
    pendingQueue.push(root);
    while (pendingQueue.size()){
       BinaryTreeNode<int>* front=pendingQueue.front();
       pendingQueue.pop();
       cout<<front->data<<":";
       if(front->left){
           cout<<"L-"<<front->left->data;
           pendingQueue.push(front->left);
       }
       if(front->right){
           cout<<"R-"<<front->right->data;
           pendingQueue.push(front->right);
       }
       cout<<endl;

    }
    
}

int main(){
    /*
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(10);
    BinaryTreeNode<int> *left= new BinaryTreeNode<int>(20);
    BinaryTreeNode<int> *right=new BinaryTreeNode<int>(30);

    root->left=left;
    root->right=right;
    */

    // BinaryTreeNode<int> *root=takeInputOfTree();
    BinaryTreeNode<int> *root=takeInputLabelWise();
    // printTreeNode(root);
    printBinaryTreeLabelWise(root);
}