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

int heightOfTree(TreeNode<int>* root){

    if(root==NULL)return 0;//this is edge case
    int max=1;
    for(int i=0;i<root->children.size();i++){
        int num=heightOfTree(root->children[i]);
        if(max<num){
            max=num;
        }
    }

    return max+1;
}

void depthOfNode(TreeNode<int>* root,int k){
    if(root==NULL)return;
    if(k==0){
       cout<<root->data<<" ";
       return;
    }
    for(int i=0;i<root->children.size();i++){
        depthOfNode(root->children[i],k-1);
    }
}

void printLeafNode(TreeNode<int>* root){
   if(root->children.size()==0){
       cout<<root->data<<" ";
   }
   for(int i=0;i<root->children.size();i++){
       printLeafNode(root->children[i]);
   }
}

int countLeafNode(TreeNode<int> *root){
    if(root==NULL)return 0;//edge case
    int ans=0;
    if(root->children.size()==0){
        return 1;
    }
    for(int i=0;i<root->children.size();i++){
        ans+=countLeafNode(root->children[i]);
    }

    return ans;

}

int main(){
TreeNode<int> *root=takeInputLabelWise();
cout<<heightOfTree(root)<<endl;
cout<<"depth of node"<<endl;
depthOfNode(root,2);
cout<<endl<<"leaf node "<<endl;
printLeafNode(root);
cout<<endl;
cout<<"no of leaf node is : "<<countLeafNode(root)<<endl;
}