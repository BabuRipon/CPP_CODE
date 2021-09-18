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

int numberOfNodes(TreeNode<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=numberOfNodes(root->children[i]);
    }
    return ans;
}

int sumOfNodes(TreeNode<int>* root){
    int ans=root->data;

    for(int i=0;i<root->children.size();i++){
        ans+=sumOfNodes(root->children[i]);
    }

    return ans;
}

int maxNodeOfTree(TreeNode<int>* root){
    int ans=root->data;

    for(int i=0;i<root->children.size();i++){
        int newData=maxNodeOfTree(root->children[i]);
        if(newData>ans){
            ans=newData;
        }
    }

    return ans;
}

int sumOfNodesLabelWise(TreeNode<int>* root){
    queue<TreeNode<int>*> q;
    q.push(root);
    int sum=0;
    while(q.size()!=0){
        TreeNode<int> *newNode=q.front();
        q.pop();
        sum+=newNode->data;
        for(int i=0;i<newNode->children.size();i++){
            q.push(newNode->children[i]);
        }
    }

    return sum;
}

int maxDataOfTreeLabelWise(TreeNode<int>* root){
    queue<TreeNode<int>*> q;
    q.push(root);
    int max=0;
    while(q.size()!=0){
        TreeNode<int> *newNode=q.front();
        q.pop();
        if(max<newNode->data){
            max=newNode->data;
        }
        for(int i=0;i<newNode->children.size();i++){
            q.push(newNode->children[i]);
        }
    }

    return max;
}



int main(){
TreeNode<int> *root=takeInputLabelWise();
// cout<<numberOfNodes(root)<<endl;
// cout<<sumOfNodes(root)<<endl;
// cout<<sumOfNodesLabelWise(root)<<endl;

// cout<<maxDataOfTreeLabelWise(root)<<endl;

cout<<maxNodeOfTree(root)<<endl;


}