#include<bits/stdc++.h>
using namespace std;

template <typename T>
class NodeList{
    public:
        T data;
        vector<NodeList<T>*> children;
        NodeList(T data){
            this->data=data;
            // children=new vector<NodeList<T>*>(); 
        }
};

void PrintTree(NodeList<int>* root){
    if(root==NULL)return ;
  cout<<root->data<<":";
  for(int i=0;i<root->children.size();i++){
      cout<<root->children[i]->data<<" ";
  }
  cout<<endl;
  for(int i=0;i<root->children.size();i++){
      PrintTree(root->children[i]);
  }
}

NodeList<int>* takeInputForTree(){
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    NodeList<int>* root=new NodeList<int>(data);
   int child;
   cout<<"enter child no"<<endl;
   cin>>child;
   for(int i=0;i<child;i++){
       NodeList<int>* newChild=takeInputForTree();
       root->children.push_back(newChild);
   }

    return root;
}

NodeList<int>* takeInputLabelwise(){
    queue<NodeList<int>*> pendingQueue;
    int rootdata;
    cout<<"enter root data "<<endl;
    cin>>rootdata;
    NodeList<int>* root=new NodeList<int>(rootdata);
    pendingQueue.push(root);
    while(!pendingQueue.empty()){
        NodeList<int>* first=pendingQueue.front();
        pendingQueue.pop();
        int child;
        cout<<"enter no of child of "<<first->data;
        cin>>child;
        for(int i=0;i<child;i++){
            int data;
            cout<<"enter "<<i+1<<"th child of "<<first->data;
            cin>>data;
            NodeList<int>* child1=new NodeList<int>(data);
            first->children.push_back(child1);
            pendingQueue.push(child1);
        }
    }

    return root;
}

int countNodeofTree(NodeList<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=countNodeofTree(root->children[i]);
    }
    return ans;
}

int heightOfTree(NodeList<int>* root){
    int height=0;
    for(int i=0;i<root->children.size();i++){
       int h1=heightOfTree(root->children[i]);
       if(height<h1){
           height=h1;
       }
    }
    return height+1;
}

int main(){
 /*NodeList<int>* root=new NodeList<int>(10);
  NodeList<int>* child1=new NodeList<int>(5);
  NodeList<int>* child2=new NodeList<int>(7);
  // cout<<root->children->size();

  root->children.push_back(child1);
  root->children.push_back(child2);*/

//   NodeList<int>* root=takeInputForTree();

NodeList<int>* root=takeInputLabelwise();

// cout<<countNodeofTree(root);
cout<<heightOfTree(root);

//   PrintTree(root);


  return 0;
}