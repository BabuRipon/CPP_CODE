#include<iostream>
#include<queue>
#include"Tree.h"
using namespace std;

void printTree(TreeNode<int> *root){
    if(root==NULL){
        return ;
    }

   cout<<root->data<<" : ";
   for(int i=0;i<root->children.size();i++){
       cout<<root->children[i]->data<<",";
   }

   cout<<endl;

   for(int i=0;i<root->children.size();i++){
       printTree(root->children[i]);
   }

}

void printTreeLavelWise(TreeNode<int> *root){
    queue<TreeNode<int>*> q;
    q.push(root);

    while(q.size()!=0){
        TreeNode<int> *popNode=q.front();
        cout<<popNode->data<<" ";
        q.pop();
        for(int i=0;i<popNode->children.size();i++){
            q.push(popNode->children[i]);
        }
    }
    
}

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"enter data"<<endl;
    cin>>rootData;
    TreeNode<int> *root=new TreeNode<int>(rootData);
    
    int n;
    cout<<"enter children number of"<<rootData<<endl;
    cin>>n;
   for(int i=0;i<n;i++){
      TreeNode<int>* child=takeInput();
      root->children.push_back(child);
   }

  return root;

}

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

int main(){
    /*
    TreeNode<int> *root=new TreeNode<int>(10);
    TreeNode<int> *node1=new TreeNode<int>(20);
    TreeNode<int> *node2=new TreeNode<int>(30);

    root->children.push_back(node1);
    root->children.push_back(node2);
    */
//    TreeNode<int> *root=takeInput();
//    printTree(root);

TreeNode<int> *root=takeInputLabelWise();
printTreeLavelWise(root);


}