#include<iostream>
#include"BinaryTreeNode.h"
#include<queue>
using namespace std;

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

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root==NULL)return false;

    if(root->data ==x){
        return true;
    }

    bool ansLeft=isNodePresent(root->left,x);
    if(ansLeft) return ansLeft;

    bool ansRight=isNodePresent(root->right,x);
    return ansRight;
}

int main(){
    // 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 10
    BinaryTreeNode<int> *root=takeInputLabelWise();
    int x;
    cin>>x;
    cout<<"node status is : "<<isNodePresent(root,x);
}