#include<iostream>
#include<queue>
#include"Tree.h"
using namespace std;

TreeNode<int>* takeInputLabelWise(){
    queue<TreeNode<int>*> pendeningQueue;
    int rootData;
    cout<<"enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root=new TreeNode<int>(rootData);
    pendeningQueue.push(root);

   while(pendeningQueue.size()!=0){
       TreeNode<int> *queueNode=pendeningQueue.front();
       pendeningQueue.pop();

       cout<<"enter how many child you want for "<<queueNode->data<<endl;
       int n;
       cin>>n;

       for(int i=0;i<n;i++){
           int data;
           cout<<"enter "<<i<<"th "<<"child  of "<<queueNode->data<<endl;
           cin>>data;
           TreeNode<int> *child=new TreeNode<int>(data);
           queueNode->children.push_back(child);
           pendeningQueue.push(child);
       }
   }

   return root;

} 

void preorder(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preorder(root->children[i]);
    }
}

void postorder(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    
    for(int i=0;i<root->children.size();i++){
        postorder(root->children[i]);
    }
    cout<<root->data<<" ";
}

void deleteTree(TreeNode<int> *root){
     if(root==NULL){
        return;
    }
    
    for(int i=0;i<root->children.size();i++){
        postorder(root->children[i]);
    }
    delete root;
}

int main(){
TreeNode<int> *root=takeInputLabelWise();
preorder(root);
cout<<endl;
postorder(root);
// deleteTree(root);//by using function
delete root;//by using destructor
}